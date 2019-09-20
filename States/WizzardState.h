#ifndef  WIZZARDSTATE_H
#define  WIZZARDSTATE_H
#include "State.h"
#include "../Units/Wizzard.h"

class Wizzard;

class WizzardState : public State{
public:
    WizzardState(Wizzard* owner, int hp, int dmg,int maxHp);
    ~WizzardState();
    virtual std::string getStateName();
};


#endif //NECROMANCERSTATE_H