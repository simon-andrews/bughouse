#include "ANSIColors.h"
#include "Board.h"
#include <iostream>
#include "Piece.h"

using namespace std;

int main()
{
  Board b;
  b.setCN('d', 6, new Piece(Black, Queen));
  b.dump();
}
