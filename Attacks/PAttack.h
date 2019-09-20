#ifndef ATTACK_H
#define ATTACK_H 

#include "../Units/Unit.h"

class Unit;
class State;

class PAttack {
    
public:
    Unit* Owner;
    PAttack(Unit* Owner);
    virtual ~PAttack();
    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);

};
#endif //ATTACK_H
