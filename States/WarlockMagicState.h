#ifndef WARLOCKMAGICSTATE_H
#define WARLOCKMAGICSTATE_H
#define MAXDEMONS 3

#include <set>
#include "MagicState.h"
#include "../Spells/WarlockSpellBook.h"
#include "../Units/Warlock.h"
#include "../Units/Demon.h"

class Warlock;
class Demon;

class WarlockMagicState : public MagicState{
private:
    std::set<Demon*> demons;
    int demonsCounter;
    int maxDemons;
    // Demon* curentDemon;
    void demonsClean();
    
    // std::set<Demon*>::iterator it;
public:
    WarlockMagicState(Unit* owner);
    ~WarlockMagicState();
    
    bool addDemon(Demon* demon);
    std::set<Demon*> getDemons() const;
    void removeDemon(Demon* demon);
    void useDemons(Unit* target);
    void showDemons();
    
};

#endif //WARLOCKMAGICSTATE_H