#ifndef WARLOCK_H
#define WARLOCK_H
// #define MAXDEMONS 3

#include <set>
#include "SpellCaster.h"
#include "Unit.h"
#include "../States/WarlockMagicState.h"
#include "../States/WarlockState.h"
#include "../Abilities/Ability.h"
#include "Demon.h"


class WarlockMagicState;
class Demon;

class Warlock : public SpellCaster , public Unit{
private:
    // std::set<Demon*> demons;
    // int demonsCounter;
    // int maxDemons;
    
public:
    Warlock(std::string name);
    ~Warlock();
    virtual void cast(Unit* target);
    virtual void cast();
    virtual MagicState* getMState();
    virtual void clearMState();
    
    bool addDemon(Demon* demon);
    // std::set<Demon*> getDemons() const;
    void removeDemon(Demon* demon);
    void showDemons();
};

#endif //WARLOCK_H