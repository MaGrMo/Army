#include "Ability.h"

Ability::Ability(Unit* owner){
    this->owner = owner;
};

Ability::~Ability(){
    
};

void Ability::useAbility(){
    std::cout<<owner->uState->getStateName() << " has no Spetial Ability on Itself try to Use Against someone " << std::endl;
};

void Ability::useAbility(Unit* victum){
    std::cout<<owner->uState->getStateName() << " has no Spetial Ability against " <<victum->uState->getStateName() << std::endl;
};
    