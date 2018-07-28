#ifndef BUGHOUSE_BITBOARD_H
#define BUGHOUSE_BITBOARD_H

#include <bitset>
#include <string>

const size_t boardWidth = 8;
const size_t boardHeight = 8;

class BitBoard
{
  public:
    BitBoard();
    bool get(int x, int y);
    void set(int x, int y, bool value);
    void flip(int x, int y);
    std::string dump();

  private:
    std::bitset<boardWidth * boardHeight> data;
};

inline int toIndex(int x, int y);

#endif
