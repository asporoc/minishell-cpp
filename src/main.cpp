#include <iostream>
#include <string>
#include "../include/parser.hpp"
#include "../include/executor.hpp"

int main(){
    while(true){
        std::string cmd;
        std::cout << "minishell-cpp >> ";
        std::getline(std::cin, cmd);
        auto result = parse(cmd);
        execute(result);
    }
}