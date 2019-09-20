#ifndef HEALLER_H
#define HEALLER_H
#include "SpellCaster.h"
#include "../States/HeallerMagicState.h"
#include "../States/HeallerState.h"

 class Healer : public SpellCaster , public Unit{
public:
    Healer(std::string name);
    ~Healer();
    // void cast(Unit* target);
    virtual MagicState* getMState();
    virtual void clearMState();
};

 
#endif //HEALLER_H