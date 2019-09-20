#ifndef WOLFSTATE_H
#define WOLFSTATE_H

#include "State.h"
#include <iostream>
#include "../Units/Unit.h"
#include "../Units/Werewolf.h"

class Werewolf;
class WolfState : public State{
public:
    WolfState(Unit* owner,int hp, int dmg, int maxHp);
    virtual  ~WolfState();
    virtual std::string getStateName();
    virtual void takeMDmg(int dmg);
    
    
    // virtual int getMaxHp();
    // virtual int getHp();
    // virtual int getDmg();
};
#endif //WOLFSTATE_H