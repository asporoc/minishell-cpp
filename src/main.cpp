#include <iostream>
#include <string>
#include "../include/parser.hpp"
#include "../include/executor.hpp"

int main(){
    while(true){
        std::string cmd;
        std::cout << "minishell-cpp >> ";
        if(!std::getline(std::cin, cmd)){
            std::cout << "exit \n";
            break;
        };
        auto result = parse(cmd);
        execute(result);
    }
}