#include "Piece.h"

Piece::Piece(Team team, PieceType type) {
  this->team = team;
  this->type = type;
}

Team Piece::getTeam()
{
  return team;
}

PieceType Piece::getType()
{
  return type;
}

const char *Piece::getUtf8Char()
{
  // There's probably a more clever way to do this with UTF-8 stuff...
  int base = 0;
  if (team == Black) base += 6;
  switch (type)
  {
    case King:   base += 0; break;
    case Queen:  base += 1; break;
    case Rook:   base += 2; break;
    case Bishop: base += 3; break;
    case Knight: base += 4; break;
    case Pawn:   base += 5; break;
  }
  switch (base)
  {
    case 0:  return "♔";
    case 1:  return "♕";
    case 2:  return "♖";
    case 3:  return "♗";
    case 4:  return "♘";
    case 5:  return "♙";
    case 6:  return "♚";
    case 7:  return "♛";
    case 8:  return "♜";
    case 9:  return "♝";
    case 10: return "♞";
    case 11: return "♟";
  }
  return "lmaoooo"; //To get rid of warnings I dunno
}
