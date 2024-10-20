#ifndef ISHAPE_H
#define ISHAPE_H
#include "Board.h"

class IShape
{
public:
    void virtual draw() const = 0;
};

#endif //ISHAPE_H
