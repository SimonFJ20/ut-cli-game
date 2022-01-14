#include "utils.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "fail_errors.h"

std::string ask(std::string prompt)
{
    std::string input{};
    std::cout << prompt;
    std::cin >> input;
    return input;
}

template<typename T>
std::string command_list(std::map<std::string, T> commands)
{
    std::vector<std::string> names{};
    for (auto const &c : commands)
        names.push_back(c.first);
    std::string result{};
    for (auto const &n : names)
    {
        if (result.size() != 0)
            result.append(", ");
        result.append(n);
    }
    return result;
}

template<typename T>
T find_command_id(std::map<std::string, T> &commands, std::string &input)
{
    for (auto const &pair : commands)
        if (pair.first == input)
            return pair.second;
}
