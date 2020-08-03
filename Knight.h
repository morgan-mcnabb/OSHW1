#ifndef KNIGHT_H
#define KNIGHT_H

#include <string>
#include "Traveler.h"

class Knight : public Traveler
{
  public:
    Knight();

    Knight(std::string name, std::string quest);
};

#endif
