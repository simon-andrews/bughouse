#ifndef BUGHOUSE_BOARD_H
#define BUGHOUSE_BOARD_H

#include "BitBoard.h"

class Board
{
  public:
    Board();

  private:
    BitBoard colors;
};

#endif
