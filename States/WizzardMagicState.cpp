#include "WizzardMagicState.h"

   WizzardMagicState::WizzardMagicState(Unit* owner):
   MagicState(owner){
     this->mana = (int)WIZZARD::MANA;
     this->maxMana = this->mana;
     this->spellBook = new WarlockSpellBook(owner);
   };
   
   WizzardMagicState::~WizzardMagicState(){
     
     
   };
   
