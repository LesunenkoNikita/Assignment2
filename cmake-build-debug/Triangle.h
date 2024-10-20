#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "IShape.h"
#include "Board.h"

class Triangle : IShape
{
public:
    void draw(int x, int y, int height, Board& board) const;
};

#endif //TRIANGLE_H
