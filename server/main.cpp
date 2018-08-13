#include "ANSIColors.h"
#include "Board.h"
#include <iostream>
#include "Piece.h"

using namespace std;

int main()
{
  Piece blackRook = Piece(Black, Rook);
  cout << blackRook.getUtf8Char() << endl;
  bool a = true;
  for (int x = 0; x < 8; x++) {
    for (int y = 0; y < 8; y++) {
      if (a)
        cout << BG_CYAN;
      else
        cout << BG_WHITE;
      cout << "  ";
      a = !a;
    }
    a = !a;
    cout << RESET_ANSI << endl;
  }
}
