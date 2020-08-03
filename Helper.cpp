#include "Helper.h"
#include <ctime>
#include <string>
#include <iostream>
#include <limits>
#include <climits>

Helper::Helper()
{
}

std::string Helper::GetRandomColor()
{
  return m_colors[rand() % 10];
}

int Helper::GetNumberOfKnights()
{
  int number = 0;
   std::cout << "Please enter an integer: " << std::endl;

  // this properly validates user input to only enter integers between 1 to 5
  while(!(std::cin >> number) || (number < 1 || number > 5))
  {
    std::cout << "Invalid input. Please enter only integer values." << std::endl;

    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');

    std::cout << "Please enter an integer: " << std::endl;
  }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  
  return number;
}

