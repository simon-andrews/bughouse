#ifndef BUGHOUSE_PIECE_H
#define BUGHOUSE_PIECE_H

typedef enum
{
  Black,
  White,
} Team;

typedef enum
{
  Pawn,
  Knight,
  Bishop,
  Rook,
  Queen,
  King,
} PieceType;

class Piece {
  public:
    Piece(Team team, PieceType type);
    Team getTeam();
    PieceType getType();
    const char *getUtf8Char();

  private:
    Team team;
    PieceType type;
};

#endif
