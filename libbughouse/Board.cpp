#include "Board.h"
#include <iostream>
#include "Piece.cpp"

using namespace std;

Board::Board()
{
  Piece piece(Black, Rook);
  this->set(0, 0, piece);
}

void Board::set(int x, int y, Piece &piece)
{
  data[TO_INDEX(x, y)] = &piece;
}
