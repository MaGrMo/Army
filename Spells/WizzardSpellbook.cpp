#include "WizzardSpellbook.h"

WizzardSpellbook::WizzardSpellbook(Unit* owner):
    SpellBook(owner){
        this-> wareHouse.insert(std::pair<std::string,Spell* >(FireBoll().getName(), new FireBoll()));
        this-> wareHouse.insert(std::pair<std::string,Spell* >(Heal().getName(), new Heal(0.5)));
        this->curentSpell = wareHouse.at(FireBoll().getName());
};
WizzardSpellbook::~WizzardSpellbook(){
    
};