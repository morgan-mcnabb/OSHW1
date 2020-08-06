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
    std::cout << knight.m_favoriteColor << std::endl; 
    knights.push_back(knight);  
  }

  std::cout << "\nYou approach an ominous chasm with a dingy bridge dangling above it.\n" << std::endl;

  std::cout << "One of your party exclaims 'There it is! The bridge of DEATH!'\n" << std::endl;

  std::cout << "You begin to descend to the bridge when one of your party members blurts out:\n\n" << std::endl;

  std::cout << "'Look! It is the old man from scene 24. He is the keeper of the bridge of death!" << std::endl;
  std::cout << " He asks each traveler 3 questions. He who answers the three questions may cross in safety!" << std::endl;
  std::cout << " If you get a question wrong, then you are cast into the Gorge of Eternal Peril!'\n\n" << std::endl;


  std::string name_answer;
  std::string quest_answer;
  std::string color_answer;
  for(int i = 0; i < knights.size();)
  {
    std::cout << "The 'bravest' of you steps forward towards the old man from scene 24, the Keeper.\n" << std::endl;
    
    std::cout << "'STOP!' the Keeper exclaims." << std::endl;
    std::cout << "'Who would cross the bridge of death must answer me these questions three.'" << std::endl;

    std::cout << "'WHAT. Is your name?'" << std::endl;

    std::getline(std::cin, name_answer);
    std::string temp_knight_name = to_lower(knights[i].m_name);
    name_answer = to_lower(name_answer);
    if(temp_knight_name.compare(name_answer) != 0)
    {
      std::cout << "\nYou hear the anguished cries as Knight " << knights[i].m_name << " plummets to their death in the Gorge of Eternal Peril.\n" << std::endl;
      knights.erase(knights.begin()+i);
      
      continue;
    }

    std::cout << "\n'WHAT. Is your quest?'" << std::endl;

    std::getline(std::cin, quest_answer);
    std::string temp_knight_quest = to_lower(knights[i].m_quest);
    quest_answer = to_lower(quest_answer);
    if(temp_knight_quest.compare(quest_answer) != 0)
    {
      std::cout << "\nYou hear the anguished cries as Knight " << knights[i].m_name << " plummets to their death in the Gorge of Eternal Peril.\n" << std::endl;
      knights.erase(knights.begin()+i);

      continue;
    } 

    std::cout << "\n'What. Is your favorite color?'" << std::endl;

    std::getline(std::cin, color_answer);
    std::string temp_knight_favorite_color = to_lower(knights[i].m_favoriteColor);
    color_answer = to_lower(color_answer);
    if(temp_knight_favorite_color.compare(color_answer) != 0)
    {
      std::cout << "\nYou hear the anguished cries as Knight " << knights[i].m_name << " plummets to their death in the Gorge of Eternal Peril.\n" << std::endl;
      knights.erase(knights.begin()+i);

      continue; 
    }
     

    std::cout << "The Knight " << knights[i].m_name << " has been granted passage across by the Keeper!\n" << std::endl;
    i++;
  }

  if(knights.size() != 0)
  {
    for(Knight knight : knights)
    {
      std::cout << "Brave Knight " << knight.m_name << ", with the quest to " << to_lower(knight.m_quest) << ", and the favorite color " << to_lower(knight.m_favoriteColor) << " has made it to the other side of the Gorge of Eternal Peril!" << std::endl;
    }
  }
}


