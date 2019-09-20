#ifndef HUMANSTATE_H
#define HUMANSTATE_H
#include "State.h"
#include "../Units/Werewolf.h"
#include "../Units/Unit.h"

class Werewolf;

class HumanState : public State{
public:
    HumanState(Unit* owner, int hpH, int dmgH, int maxHp);
    virtual ~HumanState();
    virtual std::string getStateName();
    // virtual int getMaxHp();
    // virtual int getHp();
    // virtual int getDmg();
};
#endif //HUMANSTATE_H