#ifndef PRIEST_H
#define PRIEST_H
#include "SpellCaster.h"
#include "../States/PriestMagicState.h"
#include "../States/PriestState.h"

 class Priest : public SpellCaster , public Unit{
public:
    Priest(std::string name);
    ~Priest();
    void cast(Unit* target);
    virtual MagicState* getMState();
    virtual void clearMState();
};

 


#endif //PRIEST_H