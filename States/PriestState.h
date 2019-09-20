#ifndef  PRIESTSTATE_H
#define  PRIESTSTATE_H
#include "State.h"
#include "../Units/Priest.h"

class Priest;

class PriestState : public State{
public:
    PriestState(Priest* owner, int hp, int dmg,int maxHp);
    ~PriestState();
    virtual std::string getStateName();
};


#endif //HEALLERSTATE_H