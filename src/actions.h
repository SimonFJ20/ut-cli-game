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

void do_action_sleep(Context &ctx);
void do_action_go_to(Context &ctx);
void do_action_show_van(Context &ctx);
void do_action_sell_children(Context &ctx);
void do_action_get_children(Context &ctx);
void do_action(Context &ctx, Actions action);

