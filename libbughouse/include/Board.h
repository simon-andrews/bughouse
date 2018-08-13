#ifndef BUGHOUSE_BOARD_H
#define BUGHOUSE_BOARD_H

#include "Piece.h"

#define TO_INDEX(x, y) (8 * y + x)

class Board
{
  public:
    Board();
    void set(int x, int y, Piece &piece);

  private:
    Piece *data[64];
};

#endif
