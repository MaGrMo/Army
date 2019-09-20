#include "WarlockMagicState.h"

WarlockMagicState::WarlockMagicState(Unit* owner):
MagicState(owner){
    this->demonsCounter = 0;
    this->maxDemons = MAXDEMONS;
    this->spellBook = new WarlockSpellBook(owner);
    this->mana = (int)WARLOCK::MANA;
    this->maxMana = this->mana;
    // this->it = this->demons.begin();
    // this->curentDemon = NULL;
};

WarlockMagicState::~WarlockMagicState(){
    

    for ( std::set<Demon*>::iterator it = this->demons.begin(); it != this->demons.end(); it++ ) {
       delete((*it));
    }
    
};
void WarlockMagicState::demonsClean(){
        std::set<Demon*> toRemove;

     for (std::set<Demon*>::iterator it = demons.begin(); it !=demons.end(); it++) {
        if((*it)->isDead()){
            toRemove.insert((*it));
        }
    }
    if(!toRemove.empty()){
        for (std::set<Demon*>::iterator it = toRemove.begin(); it !=toRemove.end(); it++){
            this->removeDemon((*it));
        }
    }
};
bool WarlockMagicState::addDemon(Demon* demon){
    this->demonsClean();
    if (this->demonsCounter < this->maxDemons) {
        this->demons.insert(demon);
        this->demonsCounter += 1;
        return true;
        // this->it = demons.begin();
        // this->curentDemon = *(this->it);
    } else {
        
        std::cout << "maxDemons is exited, you can't summon more demons " << std::endl;
        return false;
    }
    
};

std::set<Demon*> WarlockMagicState::getDemons() const{
    return this->demons;
    
}

void WarlockMagicState::removeDemon(Demon* demon){
    if (this->demons.empty()) {
        std::cout << "not Enought Demons to Delete(Unsumon)" << std::endl;
        this-> demonsCounter = 0;
        return;
    } else {
        this->demons.erase(this->demons.find(demon));
        this->demonsCounter -= 1;
        std::cout << "removeDemon " << *demon << "demonsCounter = "<<this->demonsCounter<<std::endl;
        delete(demon);
    }

};

void WarlockMagicState::useDemons(Unit* target){
    if (this->demons.empty()) {
        std::cout << "not Enought Demons to attack" << std::endl;
        this->demonsCounter = 0;
        return;
    }
    this->demonsClean();
    
    for (std::set<Demon*>::iterator it = demons.begin(); it !=demons.end(); it++) {
            (*it)->attack(target);
    }
};

void WarlockMagicState::showDemons(){
    if(this->demons.empty()) {
        std::cout<<"Nothing to showDemons" <<std::endl;
    }
        for (std::set<Demon*>::iterator it =this->demons.begin(); it!=this->demons.end(); ++it) {
       std::cout<<**it<<std::endl;
    }
};
