#include <iostream>
#include <vector>
#include "context.h"
#include "actions.h"

int main(int argc, char** argv)
{
    Context ctx{};
    while (!ctx.defeated())
    {
        Actions action = ask_action();
        do_action(ctx, action);
    }
}
