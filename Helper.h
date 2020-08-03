#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <vector>

class Helper
{
  public:
    Helper();

    std::vector<std::string> m_colors = { "Blue", "Red", "Yellow", "Green", "Black",
                                          "White", "Orange", "Purple", "Pink", "Brown" };

    std::string GetRandomColor();

    int GetNumberOfKnights();

};


#endif
