#ifndef STATE_H
#define STATE_H
#include <iostream>
#include "../Units/Unit.h"
#include "Point/Point.h"
#include "../Properties.h"

class Unit;

class State{
public:
    Unit* Owner;
    int hp;
    int maxHp;
    int dmg;
    bool dead;
    bool isBiteble;
    bool isUndead;
    Point location;
    
     State(Unit* Owner, int hp, int dmg,int maxHp, double x=0, double y=0);
    virtual ~State();
    

    bool isDead();
    bool getIsBiteble();
    bool getIsUndead();
    virtual bool getIsWolf() const;
    virtual int getMaxHp();
    virtual int getHp();
    virtual int getDmg();
    virtual std::string getStateName();
    
    virtual void takePDmg(int dmg);
    virtual void takeMDmg(int dmg);
    virtual void takeHp(int hp);
    
    Unit* getOwner();

};
#endif //STATE_H
