#include "Helper.h"
#include <iostream>
#include <limits>

std::vector<std::string> m_colors = { "Blue", "Red", "Yellow", "Green", "Black",
                                    "White", "Orange", "Purple", "Pink", "Brown" };

std::string GetRandomColor()
{
  return m_colors[rand() % m_colors.size()];
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
  }
  
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
  return number;
}

