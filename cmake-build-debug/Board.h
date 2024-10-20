#ifndef BOARD_H
#define BOARD_H
using namespace std;
#include <vector>

class Board
{
public:
    Board();
    void draw();
    int getBOARD_WIDTH() const;
    int getBOARD_HEIGHT() const;
    vector<vector<char>> grid;
private:
    const int BOARD_WIDTH = 80;
    const int BOARD_HEIGHT = 25;
    vector<char> shapes;
};

#endif //BOARD_H
