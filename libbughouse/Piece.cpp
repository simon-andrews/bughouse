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
