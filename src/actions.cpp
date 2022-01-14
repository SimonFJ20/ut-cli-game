#include "actions.h"
#include <iostream>
#include <map>
#include <experimental/optional>
#include <vector>
#include "fail_errors.h"
#include "utils.h"

void print_ask_for_action_help_message()
{
    std::cout <<
        "Welcome to Uncle Tom cli; a game about stealing children:\n"
        "sleep: goes to sleep requires you to be home\n"
        "go to: goes to location of choice\n"
        "show van: shows your current van\n"
        "get children: gets children from kindergarten\n"
        "sell children: sells all current children\n";
}

// template<typename T>
// std::string command_list(std::map<std::string, T> commands)
// {
//     std::vector<std::string> names{};
//     for (auto const &c : commands)
//         names.push_back(c.first);
//     std::string result{};
//     for (auto const &n : names)
//     {
//         if (result.size() != 0)
//             result.append(", ");
//         result.append(n);
//     }
//     return result;
// }

std::experimental::optional<Actions> find_action_id(std::map<std::string, Actions> &commands, std::string &input)
{
    for (auto const &pair : commands)
        if (pair.first == input)
            return pair.second;
    return std::experimental::nullopt;
}

Actions ask_action()
{
    std::map<std::string, Actions> commands{
        {"sleep",           ACTION_SLEEP},
        {"go to",           ACTION_GO_TO},
        {"show van",        ACTION_SHOW_VAN},
        {"sell children",   ACTION_SELL_CHILDREN},
        {"get children",    ACTION_GET_CHILDREN},
    };
    std::string input = ask("What do you want to do? ");
    if (input == "opts")
    {
        std::string cs = command_list<Actions>(commands);
        std::cout << cs << '\n';
        return ask_action();
    }
    else if (input == "help")
    {
        print_ask_for_action_help_message();
        return ask_action();
    }
    else
    {
        std::experimental::optional<Actions> a = find_action_id(commands, input);
        if (a) return *a;
    }
    return ACTION_SLEEP;
}

void do_action_sleep(Context &ctx)
{
    NOT_IMPLEMENTED();
}

void do_action_go_to(Context &ctx)
{
    
}

void do_action_show_van(Context &ctx)
{
    NOT_IMPLEMENTED();
}

void do_action_sell_children(Context &ctx)
{
    NOT_IMPLEMENTED();
}

void do_action_get_children(Context &ctx)
{
    NOT_IMPLEMENTED();
}

void do_action(Context &ctx, Actions action)
{
    switch (action)
    {
        case ACTION_SLEEP:
            return do_action_sleep(ctx);
        case ACTION_GO_TO:
        case ACTION_SHOW_VAN:
        case ACTION_SELL_CHILDREN:
        case ACTION_GET_CHILDREN:
            break;
    }
}

