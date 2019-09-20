#ifndef BERSERKER_H
#define BERSERKER_H 
#include <iostream>
#include "Unit.h"
#include "../States/BerserkerState.h"

class BerserkerState;

class Berserker : public Unit{
public:
    Berserker(std::string name);
    virtual ~Berserker();
    
    
};
// std::ostream& operator<<(std::ostream& out, const Berserker& berserker);
#endif //BERSERKER_H