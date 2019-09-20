#include "HeallerMagicState.h"
   HeallerMagicState::HeallerMagicState(Unit* owner):
   MagicState(owner){
     this->mana = (int)HEALLER::MANA;
     this->maxMana = this->mana;
     this->spellBook = new HeallerSpellBook(owner);
   };
   
   HeallerMagicState::~HeallerMagicState(){
     
     
   };
   
