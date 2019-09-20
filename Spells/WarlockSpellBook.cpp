#include "WarlockSpellBook.h"

WarlockSpellBook::WarlockSpellBook(Unit* owner):
    SpellBook(owner){
        this-> wareHouse.insert(std::pair<std::string,Spell* >(Summon().getName(), new Summon()));
        this->curentSpell = wareHouse.at(Summon().getName());
};
WarlockSpellBook::~WarlockSpellBook(){
    
};