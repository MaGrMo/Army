#include "VampirePAttack.h"
#define MULTIPLIER_VIMPIRE_HEAL 1

    VampirePAttack::VampirePAttack(Unit* owner):
    PAttack(owner){
        
    };
    
    VampirePAttack::~VampirePAttack(){
        
    };
    
    void VampirePAttack::attack(Unit* enemy){
    if (enemy->isDead()) {
        return;
    }
    /// Сменить Имя Указателя на owner во всех методах и классах Атак.
    enemy->uState->takePDmg(this->Owner->uState->getDmg());
    this->Owner->uState->takeHp(this->Owner->uState->getDmg()/MULTIPLIER_VIMPIRE_HEAL);
    // enemy->takePDmg(this->Owner->getState().getDmg());
    enemy->uPAttack->counterAttack(this->Owner);
    };
    
//    void VampirePAttack::counterAttack(Unit* enemy){
        
//    };
    
