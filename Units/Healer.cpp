#include "Healer.h"

Healer::Healer(std::string name):
    SpellCaster(),
    Unit(name){
    this->uPAttack = new PAttack(this);
    this->uState = new HeallerState(this, (int)HEALLER::HP, (int)HEALLER::DMG, (int)HEALLER::HP);
    this->uAbility = new Ability(this);
    this->mState = new HeallerMagicState(this);
    
};

Healer::~Healer(){
    
};

MagicState* Healer::getMState(){
    return this->mState;
};

// void Healer::cast(Unit* target){
//     if (this->mState == NULL){
//          std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
//          return;
//     } 
//     if ( this->mState->getMana() <  this->mState->getSpellBook()->getCurentSpell()->getManaCost()){
//         std::cout << "not Enought mana!!!! can't spell"<<std::cout;
//         return;
//     }
//     this->mState->getSpellBook()->getCurentSpell()->useSpell(target);
// };

void Healer::clearMState(){
    MagicState* tmp = this->mState;
    this->mState = NULL;
    delete (tmp);
};
