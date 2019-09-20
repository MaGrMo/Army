#ifndef ROUGESTATE_H
#define ROUGESTATE_H

#include "State.h"
#include "../Units/Rouge.h"
class Rouge;

class RougeState : public State{
public:
    RougeState(Rouge* owner, int hp, int dmg, int maxHp);
    ~RougeState();
    virtual std::string getStateName();
    virtual void takePDmg(int dmg);
    virtual void takeMDmg(int dmg);
    virtual void takeHp(int hp);
};
#endif //ROUGESTATE_H