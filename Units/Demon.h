#ifndef DEMON_H
#define DEMON_H
#include <iostream>
#include <string>
#include "Unit.h"
#include "Warlock.h"
#include "../Abilities/Ability.h"
#include "../States/DemonState.h"

class Warlock;

class Demon : public Unit{
private:
    static int counter;
    Warlock* master;
public:
    Demon(Warlock* master);
    ~Demon();
    Warlock* getMaster();
};

std::ostream& operator<<(std::ostream& out, const Demon& demon);
#endif //DEMON_H