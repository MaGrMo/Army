#include "PriestSpellBook.h"

PriestSpellBook::PriestSpellBook(Unit* owner):
    SpellBook(owner){
        this-> wareHouse.insert(std::pair<std::string,Spell* >(Heal().getName(), new Heal()));
        this-> wareHouse.insert(std::pair<std::string,Spell* >(FireBoll().getName(), new FireBoll(0.5)));
        this->curentSpell = wareHouse.at(Heal().getName());
};
PriestSpellBook::~PriestSpellBook(){
    
};