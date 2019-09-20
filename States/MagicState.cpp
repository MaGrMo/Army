#include "MagicState.h"

    // Unit* owner;
    // int mana;
    // int maxMana;
MagicState::MagicState(Unit* owner){
    this->owner = owner;
};
    
MagicState::~MagicState(){
    delete(this->spellBook);
    std::cout << "MagicState destructor" << std::endl;
    // this = NULL;
};
    
void MagicState::spendMana(int mana){
    this->mana -= mana;
    if (this->mana < 0) {
        this->mana = 0;
    }
};
    
void MagicState::addMana(int mana){
    this->mana += mana;
    if(this->mana > this->maxMana) {
        this->mana = this->maxMana;
    }
};
    
int MagicState::getMana(){
    return this->mana;
};
    
int MagicState::getMaxMana(){
    return this->maxMana;
};
    
SpellBook*  MagicState::getSpellBook(){
    return this-> spellBook;
};