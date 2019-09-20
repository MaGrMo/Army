#ifndef WEREWOLFABILITY_H
#define WEREWOLFABILITY_H

#include "Ability.h"
#include "../Units/Werewolf.h"
// #include "../States/WerewolfState.h"
#include "../States/HumanState.h"
#include "../States/WolfState.h"

class HumanState;
class WerewolfState;
class Werewolf;
class Unit;

class WerewolfAbility: public Ability{
private:
    // Werewolf* wOwner;
    bool isWolf;
public:
    WerewolfAbility(Unit* owner);
    ~WerewolfAbility();
    virtual void useAbility();
    virtual void useAbility(Unit* victum);
    void transform();
    
    
};


#endif //WEREWOLFABILITY_H