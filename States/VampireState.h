#ifndef VAMPIRESTATE_H
#define VAMPIRESTATE_H
#include "State.h"
#include "../Units/Vampire.h"
#include "../Units/Unit.h"
class Vampire;
class VampireState : public State{
public:
    VampireState(Unit* owner, int hp, int dmg, int maxHp);
    virtual ~VampireState();
    virtual std::string getStateName();
    
};
#endif //VAMPIRESTATE_H