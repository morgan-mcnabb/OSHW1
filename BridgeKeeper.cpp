#include "BridgeKeeper.h"

void StartScene()
{
  int numKnights = GetNumberOfKnights();
  std::vector<Knight> knights;
  std::string name;
  std::string quest;

  for(int i = 0; i < numKnights; i++)
  {
    std::cout << "Please enter Knight " << i +  1 << "'s name: " << std::endl;
    getline(std::cin, name);

    std::cout << "Please enter Knight " << name << "'s quest: " << std::endl;
    getline(std::cin, quest); 
   
    Knight knight(name, quest); 
    knights.push_back(knight);  
  }

  for(int i = 0; i < numKnights; i++)
  {
    std::cout << "Knight number " << i + 1 << "'s name is: " << knights[i].m_name << std::endl;
    std::cout << knights[i].m_name << "'s quest is: " << knights[i].m_quest << std::endl;
    std::cout << knights[i].m_name << "'s favorite color is: " << knights[i].m_favoriteColor << std::endl;
  }
}


