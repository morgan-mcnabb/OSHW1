#include "BridgeKeeper.h"
#include "Knight.h"
#include <limits>
#include <iostream>
#include <vector>
#include <string>


void StartScene()
{
  int numKnights = GetNumberOfKnights();
  std::vector<Knight> knights;
  std::string name;
  std::string quest;
  
  for(int i = 0; i < numKnights; i++)
  {
    // tried to clean cin here, didn't work.
    //std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Please enter Knight " << i +  1 << "'s name: " << std::endl;
    std::getline(std::cin, name);
    
    // tried to clean cin here, didn't work.
    //std::cin.clear();
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Please enter Knight " << name << "'s quest: " << std::endl;
    std::getline(std::cin, quest);
    
    // tried to clean cin here, didn't work.
    // tried to clean cin with every possible combination of locations,
    // still broke.
    // Getting a floating point exception (core dumped) error. Have no idea
    // why. It only started occurring when I removed the 'Helper' class and
    // move the functions from that class into this file.
    // Although it is crashing here, I don't think the problem is here.
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << name << std::endl;
    std::cout << quest << std::endl;
    Knight knight(name, quest);
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

int GetNumberOfKnights()
{
  int number = 0;
  std::cout << "Please enter an integer: " << std::endl;

  // this properly validates user input to only enter integers between 1 to 5
  while(!(std::cin >> number) || (number < 1 || number > 5))
  {
    std::cout << "Invalid input. Please enter only integer values." << std::endl;

    std::cout << "Please enter an integer: " << std::endl;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
  }

  // need to clear and ignore cin here, otherwise it muddles up the next input
  // stream and makes the loop skip a field.
  std::cin.clear();
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  return number;
}

std::string to_lower(std::string string_to_transform)
{
  std::string transformed_string;
  std::locale loc;
  for(std::string::size_type i = 0; i < string_to_transform.length(); ++i)
  {
    int ascii_char_to_lower = (int)string_to_transform[i] | 0x20;
    transformed_string.push_back(ascii_char_to_lower);
  }

  return transformed_string;
}

