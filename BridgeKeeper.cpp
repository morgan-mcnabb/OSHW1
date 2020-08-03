#include "BridgeKeeper.h"
#include "Knight.h"
#include <iostream>
#include <string>
#include <limits>

BridgeKeeper::BridgeKeeper()
{

}

void BridgeKeeper::StartScene()
{
  int numKnights = helper.GetNumberOfKnights();
  std::string name = "";
  std::string quest = "";

  for(int i = 0; i < numKnights; i++)
  {
    std::cout << "Please enter Knight " << i +  1 << "'s name: " << std::endl;
    getline(std::cin, name);

    std::cout << "Please enter Knight " << name << "'s quest: " << std::endl;
    getline(std::cin, quest); 
   
    Knight knight(name, quest); 
    knight.SetFavoriteColor(helper.GetRandomColor());
    m_knights.push_back(knight);  
  }

  for(int i = 0; i < numKnights; i++)
  {
    std::cout << "Knight number " << i + 1 << "'s name is: " << m_knights[i].GetName() << std::endl;
    std::cout << m_knights[i].GetName() << "'s quest is: " << m_knights[i].GetQuest() << std::endl;
    std::cout << m_knights[i].GetName() << "'s favorite color is: " << m_knights[i].GetFavoriteColor() << std::endl;
  }
}


