#include "PriestMagicState.h"
   PriestMagicState::PriestMagicState(Unit* owner):
   MagicState(owner){
     this->mana = (int)PRIEST::MANA;
     this->maxMana = this->mana;
     this->spellBook = new PriestSpellBook(owner);
   };
   
   PriestMagicState::~PriestMagicState(){
     
     
   };
   
