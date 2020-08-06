#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <vector>


extern std::vector<std::string> m_colors;

std::string GetRandomColor();

int GetNumberOfKnights();

std::string to_lower(std::string string_to_transform);

#endif
