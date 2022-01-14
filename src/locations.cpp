#include "locations.h"
#include "utils.h"
#include <experimental/optional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

std::experimental::optional<Locations> find_location_id(std::map<std::string, Locations> &commands, std::string &input)
{
    for (auto const &pair : commands)
        if (pair.first == input)
            return pair.second;
    return std::experimental::nullopt;
}

Locations ask_location()
{
    std::map<std::string, Locations> commands{
        {"home",            LOCATION_HOME},
        {"kindergarten",    LOCATION_KINDERGARTEN},
        {"store",           LOCATION_STORE},
    };
    std::string input = ask("What do you want to do? ");
    if (input == "opts")
    {
        // std::string cs = command_list<Locations>(commands);
        // std::cout << cs << '\n';
        return ask_location();
    }
    else if (input == "help")
    {
        return ask_location();
    }
    else
    {
        auto a = find_location_id(commands, input);
        if (a) return *a;
    }
    return LOCATION_HOME;
}
