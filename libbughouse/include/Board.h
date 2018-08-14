#ifndef BUGHOUSE_BOARD_H
#define BUGHOUSE_BOARD_H

#include "Piece.h"

class Board
{
  public:
    Board();
    void set(int x, int y, Piece *piece);
    void setCN(char column, int row, Piece *piece);
    Piece *get(int x, int y);
    void dump();

  private:
    Piece *data[64];
};

#endif
