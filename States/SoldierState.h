#ifndef SOLDIERSTATE_H
#define SOLDIERSTATE_H
#include "State.h"
#include "../Units/Soldier.h"

class Soldier;

class SoldierState: public State {
public:
    // std::string name;
    SoldierState(Soldier* owner, int hp, int dmg, int maxHp);
    ~SoldierState();
    virtual void takePDmg(int dmg);
    virtual void takeMDmg(int dmg);
    virtual void takeHp(int hp);
    virtual std::string getStateName();
};
#endif //SOLDIERSTATE_H