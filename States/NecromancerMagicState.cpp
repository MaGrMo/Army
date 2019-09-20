#include "NecromancerMagicState.h"

   NecromancerMagicState::NecromancerMagicState(Unit* owner):
   MagicState(owner){
     this->mana = (int)NECROMANCER::MANA;
     this->maxMana = this->mana;
     this->spellBook = new NecromacerSpellBook(owner);
   };
   
   NecromancerMagicState::~NecromancerMagicState(){
     
     
   };