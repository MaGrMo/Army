#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../States/State.h"
#include "../States/MagicState.h"
#include "../Attacks/PAttack.h"
#include "../Abilities/Ability.h"
#include "../Properties.h"
#include "../Observers/Observer.h"
#include "../Observers/Observable.h"

class PAttack;
class Ability;
class Oserver;
class Observable;
class MagicState;


class Unit : public Observable{
public:
    Ability* uAbility;
    State* uState;
    PAttack* uPAttack;
    std::string name;

    Unit(std::string name);
    virtual ~Unit();
    
    virtual State* getState() const;
    virtual MagicState* getMState(); 
    
    const std::string& getName() const;
    
    virtual bool isDead();//= 0; pure Virtual;
    virtual bool isBiteble();
    virtual bool isUndead();
    
    virtual void attack(Unit* enemy);
    virtual void useAbility();
    virtual void useAbility(Unit* victum);
    void cast(Unit* target);
    
    virtual void attach(Observer* observer);
    virtual void deAttach(Observer* observer);
    virtual void clearMState();
    //notifiys all Observers when dies;
    
    // virtual void notify(Observer* observer);
    


    
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);
#endif //UNIT_H