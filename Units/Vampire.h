#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Unit.h"
#include "../Attacks/VampirePAttack.h"
#include "../States/VampireState.h"
#include "../Abilities/VampireAbility.h"

class VampirePAttack;
class VampireState;
class VampireAbility;

class Vampire: public Unit {
public:
    Vampire(std::string name);
    virtual ~Vampire();
    // virtual void useAbility();
    // virtual bool isDead();
    
};

// std::ostream& operator<<(std::ostream& out, const Vampire& vampire);
#endif //VAMPIRE_H