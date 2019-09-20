#ifndef  NECROMANCERSTATE_H
#define  NECROMANCERSTATE_H
#include "State.h"
#include "../Units/Necromancer.h"

class Necromancer;

class NecromancerState : public State{
public:
    NecromancerState(Necromancer* owner, int hp, int dmg,int maxHp);
    ~NecromancerState();
    virtual std::string getStateName();
};


#endif //NECROMANCERSTATE_H