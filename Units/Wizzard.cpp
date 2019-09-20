#include "Wizzard.h"

Wizzard::Wizzard(std::string name):
    SpellCaster(),
    Unit(name){
    this->uPAttack = new PAttack(this);
    this->uState = new WizzardState(this, (int)WIZZARD::HP, (int)WIZZARD::DMG, (int)WIZZARD::HP);
    this->uAbility = new Ability(this);
    this->mState = new WizzardMagicState(this);
    
};

Wizzard::~Wizzard(){
    
};

MagicState* Wizzard::getMState(){
    return this->mState;
};

// void Wizzard::cast(Unit* target){
//     if (this->mState == NULL){
//          std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
//          return;
//     } 
    
//     if ( this->mState->getMana() <  this->mState->getSpellBook()->getCurentSpell()->getManaCost()){
//         std::cout << "not Enought mana!!!! can't spell"<<std::cout;
//         return;
//     }
//     this->mState->getSpellBook()->getCurentSpell()->useSpell(target);
//     this->mState->spendMana(this->mState->getSpellBook()->getCurentSpell()->getManaCost());
// };

void Wizzard::clearMState(){
    MagicState* tmp = this->mState;
    this->mState = NULL;
    delete (tmp);
};
