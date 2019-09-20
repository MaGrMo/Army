#ifndef ROUGE_H
#define ROUGE_H

#include <iostream>
#include "Unit.h"
#include "../States/RougeState.h"
#include "../Attacks/RougeAttack.h"
#include "../Abilities/RougeAbility.h"

class Rouge : public Unit{
public:
    Rouge(std::string name);
    virtual ~Rouge();
    // virtual void useAbility();
};
// std::ostream& operator<<(std::ostream& out, const Rouge& rouge);
#endif //ROUGE_H