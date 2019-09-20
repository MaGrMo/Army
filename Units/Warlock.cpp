#include "Warlock.h"

Warlock::Warlock(std::string name):
    SpellCaster(),
    Unit(name){
    this->uPAttack = new PAttack(this);
    this->uState = new WarlockState(this, (int)WARLOCK::HP, (int)WARLOCK::DMG, (int)WARLOCK::HP);
    this->uAbility = new Ability(this);
    this->mState = new WarlockMagicState(this);
    // this->demonsCounter = 0;
    // this->maxDemons = MAXDEMONS;
};

Warlock::~Warlock(){
    
};

MagicState* Warlock::getMState(){
    return this->mState;
};

void Warlock::cast(Unit* target){
    if (this->mState == NULL){
         std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 

    ((WarlockMagicState*)this->mState)->useDemons(target);
    
};

void Warlock::cast() {
    if (this->mState == NULL){
         std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    
    if ( this->mState->getMana() <  this->mState->getSpellBook()->getCurentSpell()->getManaCost()){
        std::cout << "not Enought mana!!!! can't summon"<<std::endl;
        return;
    }
    Demon* dmnTmp = new Demon(this);
    
    if (!this->addDemon(dmnTmp)){
        
        delete(dmnTmp);
        
        std::cout<<"additionad demon Destructed"<<std::endl;
        return;
    } 
    this->mState->spendMana(this->mState->getSpellBook()->getCurentSpell()->getManaCost());
    
    // std::cout  << "summon 1 Demon"<<std::endl;
}
void Warlock::clearMState(){
    MagicState* tmp = this->mState;
    this->mState = NULL;
    delete (tmp);
};

bool Warlock::addDemon(Demon* demon){
    
    if (this->mState == NULL){
         return false;
    } 
    return(((WarlockMagicState*)this->mState)->addDemon(demon));
    
    
    // if (this->demonsCounter < this->maxDemons) {
    //     this->demons.insert(demon);
    // } else {
    //     std::cout << "maxDemons is exited, you can't summon more demons " << std::endl;
    // }
    
};

// std::set<Demon*> Warlock::getDemons() const{
//     return this->demons;
    
// }

void Warlock::removeDemon(Demon* demon){
    
    if (this->mState == NULL){
         return;
    } 
    
    ((WarlockMagicState*)this->mState)->removeDemon(demon);
    // this->demonsCounter -= 1;
    // if (this->demonsCounter <= 0) {
    //     std::cout << "not Enought Demons to Delete(Unsumon)" << std::endl;
    //     this-> demonsCounter = 0;
    //     return;
    // } 
    // if ( this->demons.find(demon) != this->demons.end() ) {
    //    this->demons.erase(demon);
    //  }
    //  delete(demon);
};

void Warlock::showDemons(){
    ((WarlockMagicState*)this->mState)->showDemons();
}

