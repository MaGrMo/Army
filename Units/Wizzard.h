#ifndef WIZZARD_H
#define WIZZARD_H

#include "SpellCaster.h"
#include "../States/WizzardMagicState.h"
#include "../States/WizzardState.h"

class Wizzard : public SpellCaster , public Unit{
public:
    Wizzard(std::string name);
    ~Wizzard();
    // virtual void cast(Unit* target);
    virtual MagicState* getMState();
    virtual void clearMState();
};

#endif //WIZZARD_H