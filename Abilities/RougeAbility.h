#ifndef ROUGEABILITY_H
#define ROUGEABILITY_H
#include "Ability.h"
#include "../Units/Rouge.h"

class Rouge;

class RougeAbility : public Ability{
public:
    RougeAbility(Rouge* owner);
    virtual ~RougeAbility();
    // virtual void useAbility();
    
};

#endif //ROUGEABILITY_H