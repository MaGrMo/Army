#ifndef ROUGEATTACK_H
#define ROUGEATTACK_H 
#include "PAttack.h"
#include <iostream>
#include "../Units/Unit.h"
#include "../Units/Rouge.h"
class Rouge;
class PAttack;
class Unit;

class RougeAttack : public PAttack{
public:
    
    RougeAttack(Unit* owner);
    virtual ~RougeAttack();
    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);
};
#endif //ROUGEATTACK_H
