#include "Traveler.h"
#include <string>

Traveler::Traveler()
{
  
}

Traveler::Traveler(std::string name, std::string quest) : m_name(name), m_quest(quest)
{
  
}

std::string Traveler::GetName()
{
  return m_name;
}

std::string Traveler::GetQuest()
{
  return m_quest;
}

std::string Traveler::GetFavoriteColor()
{
  return m_favoriteColor;
}

void Traveler::SetFavoriteColor(std::string color)
{
  m_favoriteColor = color;
}

