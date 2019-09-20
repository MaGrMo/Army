#include "PAttack.h"
/// Сменить Имя Указателя на owner во всех методах и классах Атак.
PAttack::PAttack(Unit* Owner){
    this->Owner = Owner;
    };
    
PAttack:: ~PAttack(){
    // delete(Owner);
};
    
void PAttack::attack(Unit* enemy){
    // std::cout << this->Owner->getName()<<" attack " <<enemy->getName()<< std::endl;
    if (enemy->isDead()) {
        return;
    }
    enemy->uState->takePDmg(this->Owner->uState->getDmg());
    // enemy->takePDmg(this->Owner->getState().getDmg());
    enemy->uPAttack->counterAttack(this->Owner);
    std::cout <<this->Owner->getName()<<" attack "<< enemy->getName()<<std::endl;
    
};
    
void PAttack::counterAttack(Unit* enemy){
    if (enemy->isDead()) {
        return;
    }
    enemy->uState->takePDmg(this->Owner->uState->getDmg() / 2);
};