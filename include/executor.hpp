#pragma once
#include <string>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>

void execute(const std::vector<std::string>& tokens);