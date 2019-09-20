#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
// #include "../States/WerewolfState.h"
#include "../States/WolfState.h"
#include "../States/HumanState.h"
#include "../Abilities/WerewolfAbility.h"

// #include "Biters.h"

class Werewolf : public Unit{
    
public:

    Werewolf(std::string name);
    virtual ~Werewolf();
    // virtual void useAbility();
    // virtual void useAbility(Unit* victum);
    // virtual bool isDead();
    
//private:

    bool isWolf() const;
    // void transform();
    
};

// std::ostream& operator<<(std::ostream& out, const Werewolf& werewolf);
#endif //WEREWOLF_H