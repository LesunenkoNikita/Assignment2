#include "Board.h"
using namespace std;
#include <vector>
#include <iostream>

Board::Board() : grid(BOARD_HEIGHT, vector<char>(BOARD_WIDTH, ' ')) {}
void Board::draw()
{
    for (auto& row : grid) {
        for (char c : row) {
            cout << c;
        }
        cout << "\n";
    }
}
int Board::getBOARD_WIDTH() const
{
    return BOARD_WIDTH;
}
int Board::getBOARD_HEIGHT() const
{
    return BOARD_HEIGHT;
}



