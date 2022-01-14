#include "locations.h"
#include "utils.h"
#include <iostream>
#include <map>
#include <string>

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
        std::cout << command_list(commands) << '\n';
        return ask_location();
    }
    else if (input == "help")
    {
        return ask_location();
    }
    else
        return find_command_id(commands, input);
}
