#ifndef VEMPIREPATTACK_H
#define VEMPIREPATTACK_H value

#include "PAttack.h"
#include "../Units/Unit.h"

class Unit;

class VampirePAttack: public PAttack{
public:
    VampirePAttack(Unit* owner);
    virtual ~VampirePAttack();
    virtual void attack(Unit* enemy);
//    virtual void counterAttack(Unit* enemy);
};
#endif //VEMPIREPATTACK_H
