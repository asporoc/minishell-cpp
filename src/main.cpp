#include <iostream>
#include <string>
int main(){
    while(true){
        std::string cmd;
        std::cout << "minishell-cpp >> ";
        std::getline(std::cin, cmd);
    }
}