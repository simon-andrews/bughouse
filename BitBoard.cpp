#include "BitBoard.h"
#include <bitset>
#include <sstream>
#include <string>

using namespace std;

BitBoard::BitBoard()
{
  data = bitset<boardWidth * boardHeight>();
}

bool BitBoard::get(int x, int y)
{
  return data[toIndex(x, y)];
}

void BitBoard::set(int x, int y, bool value)
{
  data.set(toIndex(x, y), value);
}

void BitBoard::flip(int x, int y)
{
  data.flip(toIndex(x, y));
}

string BitBoard::dump()
{
  stringstream s;
  for (int x = 0; x < boardWidth; x++)
  {
    for (int y = 0; y < boardHeight; y++)
    {
      s << data[toIndex(x, y)];
    }
    s << endl;
  }
  return s.str();
}

inline int toIndex(int x, int y)
{
  return boardWidth * x + y;
}
