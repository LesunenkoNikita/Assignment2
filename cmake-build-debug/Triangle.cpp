#include "Triangle.h"
#include "Board.h"

void Triangle::draw(int x, int y, int height, Board& board) const
    {
        if (height <= 0) return;
        for (int i = 0; i < height; ++i) {
            int leftMost = x - i;
            int rightMost = x + i;
            int posY = y + i;
            if (posY < board.getBOARD_HEIGHT()) {
                if (leftMost >= 0 && leftMost < board.getBOARD_WIDTH())
                     board.grid[posY][leftMost] = '*';
                if (rightMost >= 0 && rightMost < board.getBOARD_WIDTH() && leftMost != rightMost)
                        board.grid[posY][rightMost] = '*';
            }
        }
        for (int j = 0; j < 2 * height - 1; ++j) {
            int baseX = x - height + 1 + j;
            int baseY = y + height - 1;
            if (baseX >= 0 && baseX < board.getBOARD_WIDTH() && baseY < board.getBOARD_HEIGHT())
                 board.grid[baseY][baseX] = '*';
        }
    }

