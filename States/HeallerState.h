#ifndef  HEALLERSTATE_H
#define  HEALLERSTATE_H
#include "State.h"
#include "../Units/Healer.h"

class Healer;

class HeallerState : public State{
public:
    HeallerState(Healer* owner, int hp, int dmg,int maxHp);
    ~HeallerState();
    virtual std::string getStateName();
};


#endif //HEALLERSTATE_H