#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>
class Traveler
{
  public:
    Traveler();

    Traveler(std::string name, std::string age);
   
    std::string GetName(); 
    std::string GetQuest();
    std::string GetFavoriteColor();
    void SetFavoriteColor(std::string color);
  protected:
    std::string m_name;
    std::string m_quest;
    std::string m_favoriteColor;
};

#endif
