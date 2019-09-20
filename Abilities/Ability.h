#ifndef AVILITY_H
#define AVILITY_H value
#include "../Units/Unit.h"
#include "../Properties.h"
#include <iostream>
class Unit;
class Ability {
public:
    Unit* owner;
    
    Ability(Unit* owner);
    virtual ~Ability();
    virtual void useAbility();
    virtual void useAbility(Unit* victum);
};
#endif