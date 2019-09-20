#include "SpellCaster.h"

SpellCaster::SpellCaster(){
    
};

SpellCaster::~SpellCaster(){
    delete(mState);
};

MagicState* SpellCaster::getMState(){
    return this->mState;
};
void SpellCaster::showSpellBook(){
    if (this->mState == NULL) {
        return;
    }
    
    this->mState->spellBook->showSpells();
    // std::cout <<"Underconstuction" <<std::endl;
};
    //  void selectSpell(std::string);

void SpellCaster::cast(Unit* target){
    
    if (this->mState == NULL){
         std::cout << "you are " << ((Unit*)this)->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    if ( this->mState->getMana() <  this->mState->getSpellBook()->getCurentSpell()->getManaCost()){
        std::cout << "not Enought mana!!!! can't spell"<<std::endl;
        return;
    }
    this->mState->getSpellBook()->getCurentSpell()->useSpell(target);
    this->mState->spendMana(this->mState->getSpellBook()->getCurentSpell()->getManaCost());
};

void SpellCaster::cast(){
    std::cout<< "You have to cast agains Some One" << std::endl;
}
void SpellCaster::showCurentSpell(){
    if (this->mState == NULL){
         std::cout << "you are " << ((Unit*)this)->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    this->mState->getSpellBook()->showCurentSpell();
    
};

void SpellCaster::nextSpell(){
    if (this->mState == NULL){
         std::cout << "you are " << ((Unit*)this)->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    this->mState->getSpellBook()->nextSpell();
    
};


// void SpellCaster::clearMState(){
//     MagicState* tmp = this->mState;
//     this->mState = NULL;
//     delete (tmp);
// };
