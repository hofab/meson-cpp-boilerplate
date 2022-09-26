#include <stdbool.h>

#pragma once

class classA
{
public:

    static bool returnTrue(void);

    static bool returnFalse(void)
    {
        return false;
    }
};
