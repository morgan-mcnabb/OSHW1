#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>
#include <vector>
class Traveler
{
  public:
    Traveler(std::string name, std::string age);
    std::string m_name;
    std::string m_quest;
    std::string m_favoriteColor;
    void SetFavoriteColor(std::string color);

  private:
    std::string GetRandomColor();
    
};

#endif
