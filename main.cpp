#include "BitBoard.h"
#include <iostream>

using namespace std;

int main()
{
  BitBoard board;
  board.set(1, 1, true);
  cout << "This is bughouse-engine speaking" << endl;
  cout << board.dump();
}
