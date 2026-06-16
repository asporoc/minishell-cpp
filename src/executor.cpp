#include <string>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>
#include "../include/executor.hpp"

void execute(const std::vector<std::string>& tokens){

    if(tokens.empty()){
        return;
    }
    pid_t pid = fork();

    

    if(pid ==0){

            std::vector<char*> argv;
             for (const auto& t : tokens) {
            argv.push_back(const_cast<char*>(t.c_str()));
        }
        argv.push_back(nullptr);
        execvp(argv[0], argv.data());

        perror("execvp");
        _exit(1);
    }
    waitpid(pid, nullptr, 0);
}