#pragma once
#include <string>
#include <map>

std::string ask(std::string prompt);

template<typename T>
std::string command_list(std::map<std::string, T> commands);

// template<typename T>
// T find_command_id(std::map<std::string, T> &commands, std::string &input);
