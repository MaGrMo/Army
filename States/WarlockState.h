#ifndef  WARLOCKSTATE_H
#define  WARLOCKSTATE_H
#include "State.h"
#include "../Units/Warlock.h"

class Warlock;

class WarlockState : public State{
    private :
    
public:
    WarlockState(Warlock* owner, int hp, int dmg,int maxHp);
    ~WarlockState();
    virtual std::string getStateName();
};


#endif //WARLOCKSTATE_H