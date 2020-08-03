#ifndef BRIDGEKEEPER_H
#define BRIDGEKEEPER_H

#include <vector>
#include <string>
#include "Knight.h"
#include "Helper.h"

class BridgeKeeper
{
  public:
    BridgeKeeper();
    void StartScene();
  
  private:
    std::vector<Knight> m_knights; 
    Helper helper;
};

#endif
