#ifndef VAMIREABILITY_H
#define VAMIREABILITY_H
#include "Ability.h"
#include "../Units/Vampire.h"
#include "../Units/SpellCaster.h"
#include "../States/VampireState.h"
#include "../Attacks/VampirePAttack.h"

class VampireState;

class VampirePAttack;

class VampireAbility : public Ability{
public:
    VampireAbility(Unit* owner);
    ~VampireAbility();
    // virtual void useAbility();
    virtual void useAbility(Unit* victum);
    // virtual void useAbility(SpellCaster* victum);
};



#endif //VAMIREABILITY_H
