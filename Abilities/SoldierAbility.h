#ifndef SOLDIERABILITY_H
#define SOLDIERABILITY_H

#include "Ability.h"
#include "../Units/Soldier.h"
#include "../Properties.h"

class Soldier;

class SoldierAbility : public Ability{
public:
    SoldierAbility(Soldier* owner);
    virtual ~SoldierAbility();
    // virtual void useAbility();
};

#endif //SOLDIERABILITY_H