#include "Board.h"
#include <iostream>

using namespace std;

Board::Board()
{
  // Black is on the "bottom" of the board
  for (int x = 0; x < boardWidth; x++)
    for (int y = boardHeight - 2; y < boardHeight; y++)
      colors.set(x, y, true);
  cout << colors.dump() << endl;
}
