#pragma once
#include "context.h"

typedef enum Actions
{
    ACTION_SLEEP = 0,
    ACTION_GO_TO,
    ACTION_SHOW_VAN,
    ACTION_SELL_CHILDREN,
    ACTION_GET_CHILDREN
}
Actions;

void print_ask_for_action_help_message();

Actions ask_action();

void do_sleep_action(Context &ctx);
void do_go_to_action(Context &ctx);
void do_show_van_action(Context &ctx);
void do_sell_children_action(Context &ctx);
void do_get_children_action(Context &ctx);
void do_action(Context &ctx, Actions action);

