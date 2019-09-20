#ifndef SOLDIER_H
#define SOLDIER_H 


#include "Unit.h"
#include "../States/SoldierState.h"
#include "../Abilities/SoldierAbility.h"
class SoldierState;
class SoldierAbility;

class Soldier : public Unit {
public:
    // SoldierState* sState;
    
    // virtual SoldierState getState() const;
    Soldier(std::string name);
    virtual ~Soldier();
    // virtual bool isDead();
    // virtual void useAbility();
};
// std::ostream& operator<<(std::ostream& out, const Soldier& soldier);

#endif //SOLDIER_H