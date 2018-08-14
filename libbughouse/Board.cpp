#include "ANSIColors.h"
#include "Board.h"
#include <iostream>
#include "Piece.h"

using namespace std;

const PieceType backline1[] = {Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook};
const PieceType backline2[] = {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook};

Board::Board()
{
  // Pointers aren't automatically set to null for some reason
  for (int i = 0; i < 64; i++)
    data[i] = NULL;
  for (int x = 0; x < 8; x++)
  {
    Piece *black = new Piece(Black, backline1[x]);
    set(x, 0, black);
    Piece *white = new Piece(White, backline1[x]);
    set(x, 7, white);
    Piece *blackPawn = new Piece(Black, Pawn);
    set(x, 1, blackPawn);
    Piece *whitePawn = new Piece(White, Pawn);
    set(x, 6, whitePawn);
  }
}

void Board::set(int x, int y, Piece *piece)
{
  data[TO_INDEX(x, y)] = piece;
}

Piece *Board::get(int x, int y)
{
  return data[TO_INDEX(x, y)];
}

void Board::dump()
{
  bool a = true;
  cout << "  A B C D E F G H" << endl;
  for (int y = 0; y < 8; y++)
  {
    cout << 8 - y << ' ';
    cout << FG_BLACK;
    for (int x = 0; x < 8; x++)
    {
      cout << (a ? BG_CYAN : BG_WHITE);
      a = !a;
      Piece *p = get(x, y);
      cout << (p != NULL ? p->getUtf8Char() : " ") << ' ';
    }
    a = !a;
    cout << RESET_ANSI << ' ' << 8 - y << endl;
  }
  cout << "  A B C D E F G H" << endl;
}
