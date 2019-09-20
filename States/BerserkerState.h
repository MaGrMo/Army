#ifndef BERSERKERSTATE_H
#define BERSERKERSTATE_H

#include "State.h"
#include <iostream>
#include "../Units/Berserker.h"
class Berserker;

class BerserkerState : public State{
public:
    BerserkerState(Berserker* owner, int hp, int dmg, int maxHp);
    ~BerserkerState();
    virtual std::string getStateName();
    virtual void takeMDmg(int dmg);
    // virtual void takePDmg(int dmg);
    // virtual void takeHp(int hp);
};
#endif //BERSERKERSTATE_H