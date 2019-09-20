#ifndef DEMONSTATE_H
#define DEMONSTATE_H
#include "State.h"
#include "../Units/Demon.h"
#include "../Units/Warlock.h"


class Demon;

class DemonState: public State {
public:
    // std::string name;
    DemonState(Demon* owner, int hp, int dmg, int maxHp);
    ~DemonState();
    virtual void takePDmg(int dmg);
    virtual void takeMDmg(int dmg);
    virtual void takeHp(int hp);
    virtual std::string getStateName();
};
#endif //DEMONSTATE_H