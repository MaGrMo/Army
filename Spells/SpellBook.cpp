#include "SpellBook.h"

SpellBook::SpellBook(Unit* owner){
    this->owner = owner;
};

SpellBook::~SpellBook(){
    // Clean Obgects in Spell Book
    
    if(this->wareHouse.size() > 1){
        for ( std::map<std::string, Spell* >::iterator it = this->wareHouse.begin(); it != this->wareHouse.end(); ++it ) {
       std::cout << it->second->getName()<< std::endl;
       delete(it->second);
        }
    } else {
        delete(curentSpell);
    }
    // delete(curentSpell);
};
Spell* SpellBook::getCurentSpell(){
    return curentSpell;
};

void SpellBook::selectSpell(std::string spellName){
    this->curentSpell = wareHouse.at(spellName);
};

// void SpellBook::selectSpell(){
    
// };

void SpellBook::deleteSpell(std::string spellName){
    
};

void SpellBook::nextSpell(){
    if(this->wareHouse.size() > 1){
        
        std::map<std::string, Spell* >::iterator it = this->wareHouse.find(this->curentSpell->getName());
        it++;
        if ( it == this->wareHouse.end()){
            it = this->wareHouse.begin();
        }
        this->curentSpell = it->second;
    } else {
        return;
    }
    
};

void SpellBook::showSpells(){
    std::map<std::string, Spell* >:: iterator it = wareHouse.begin();
    std::cout <<"{";
    for (; it!=wareHouse.end(); it++) {
        std::cout<<it->first << ", ";
    }
    std::cout <<"}"<<std::endl;
};

void SpellBook::showCurentSpell(){
    std::cout << owner->getState()->getStateName() << "  " << owner->getName() <<" curentSpell is " << this->curentSpell->getName() <<std::endl;
};
