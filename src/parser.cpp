#include <sstream>
#include <vector>
#include <string>
std::vector<std::string> parse(std::string cmd){
    std::stringstream ss(cmd);
    std::string token;
    std::vector<std::string> cmd_array;
    while(ss>>token){
        cmd_array.push_back(token);
    }
    return cmd_array;
}