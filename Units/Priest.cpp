#include "Priest.h"

Priest::Priest(std::string name):
    SpellCaster(),
    Unit(name){
    this->uPAttack = new PAttack(this);
    this->uState = new PriestState(this, (int)PRIEST::HP, (int)PRIEST::DMG, (int)PRIEST::HP);
    this->uAbility = new Ability(this);
    this->mState = new PriestMagicState(this);
    
};

Priest::~Priest(){
    
};

MagicState* Priest::getMState(){
    return this->mState;
};

void Priest::cast(Unit* target){
    if (this->mState == NULL){
         std::cout << "you are " << ((Unit*)this)->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    if ( this->mState->getMana() <  this->mState->getSpellBook()->getCurentSpell()->getManaCost()){
        std::cout << "not Enought mana!!!! can't spell"<<std::endl;
        return;
    }
    int tmpEffect = this->mState->getSpellBook()->getCurentSpell()->getEffect();
    if(target->isUndead() && this->mState->getSpellBook()->getCurentSpell()->isAttakable() == true) {
        this->mState->getSpellBook()->getCurentSpell()->setEffect(tmpEffect * 2);
    }
    this->mState->getSpellBook()->getCurentSpell()->useSpell(target);
    this->mState->spendMana(this->mState->getSpellBook()->getCurentSpell()->getManaCost());
    this->mState->getSpellBook()->getCurentSpell()->setEffect(tmpEffect);
};



void Priest::clearMState(){
    MagicState* tmp = this->mState;
    this->mState = NULL;
    delete (tmp);
};