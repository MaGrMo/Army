#ifndef NECROMANSER_H
#define NECROMANSER_H

#include "SpellCaster.h"
#include "../States/NecromancerState.h"
#include "../States/NecromancerMagicState.h"
#include "../Observers/Observer.h"
#include "../Observers/Observable.h"

class Oserver;
class Observable;

class Necromancer : public SpellCaster , public Unit, public Observer{
public:
    Necromancer(std::string name);
    ~Necromancer();
    void cast(Unit* target);
    virtual void update(Observable* observable); 
    virtual bool isDead();
    virtual MagicState* getMState();
    virtual void clearMState();
    
};

#endif //NECROMANSER_H