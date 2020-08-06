#include "Helper.h"
#include <iostream>
#include <limits>
#include <locale>

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
    //transformed_string.push_back(std::tolower(string_to_transform[i], loc));
  }

  return transformed_string;
}
