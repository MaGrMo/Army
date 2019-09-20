#include "NecromacerSpellBook.h"

NecromacerSpellBook::NecromacerSpellBook(Unit* owner):
    SpellBook(owner){
        this-> wareHouse.insert(std::pair<std::string,Spell* >(Curse().getName(), new Curse()));
        this->curentSpell = wareHouse.at(Curse().getName());
};

NecromacerSpellBook::~NecromacerSpellBook(){
    
};