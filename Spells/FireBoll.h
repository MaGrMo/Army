#ifndef FIREBOLL_H
#define FIREBOLL_H
#include <iostream>
#include "Spell.h"

class Unit;

class FireBoll : public Spell{
public:
    FireBoll(double multiplier = 1);
    ~FireBoll();

    virtual void useSpell(Unit* target);
    virtual std::string getName();
};

#endif //FIREBOLL_H