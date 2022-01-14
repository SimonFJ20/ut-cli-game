#include "context.h"

bool Context::defeated()
{
    return _defeated;
}

void Context::setDefeated(bool v)
{
    _defeated = v;
}

enum Locations Context::location()
{
    return _location;
}

void Context::setLocation(enum Locations l)
{
    _location = l;
}
