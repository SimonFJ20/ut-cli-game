#pragma once

#include "locations.h"

class Context
{
public:
    bool defeated();
    void setDefeated(bool v);
    enum Locations location();
    void setLocation(enum Locations l);
private:
    bool _defeated{false};
    enum Locations _location{LOCATION_HOME};
};
