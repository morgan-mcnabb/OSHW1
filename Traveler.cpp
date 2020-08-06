#include "Traveler.h"

Traveler::Traveler(std::string name, std::string quest) : m_name(name), m_quest(quest)
{
  Traveler::SetFavoriteColor(GetRandomColor());  
}


void Traveler::SetFavoriteColor(std::string color)
{
  m_favoriteColor = color;
}

std::vector<std::string> colors = { "Blue", "Red", "Yellow", "Green", "Black",
  "White", "Orange", "Purple", "Pink", "Brown" };

std::string Traveler::GetRandomColor()
{
  return colors[rand() % colors.size()];
}


