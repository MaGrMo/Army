#include "Necromancer.h"
#define RECOVERHP 10

Necromancer::Necromancer(std::string name):
    SpellCaster(),
    Unit(name),
    Observer(){
    this->uPAttack = new PAttack(this);
    this->uState = new NecromancerState(this, (int)NECROMANCER::HP, (int)NECROMANCER::DMG, (int)NECROMANCER::HP);
    this->uAbility = new Ability(this);
    this->mState = new NecromancerMagicState(this);
    
};

Necromancer::~Necromancer(){
    
};

MagicState* Necromancer::getMState(){
    return this->mState;
};

void Necromancer::cast(Unit* target){
    if (this->mState == NULL){
         std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
         return;
    } 
    this->mState->getSpellBook()->getCurentSpell()->useSpell(target);
    
    target->attach(this);
    this->observables.insert(target);
};

void Necromancer::update(Observable* observable){
    // std::cout << *((Unit*)observable) << "is dead" << std::endl;
    this->uState->takeHp((int)CURSE::FEEDBACK);
};

bool Necromancer::isDead(){
    if (this->uState->isDead()) {
        // deatach at all observable;
        for (std::set<Observable*>::iterator it = observables.begin(); it != observables.end(); it++ ) {
            (*it)->deAttach(this);
        }
    }
    
    return this->uState->isDead();
};

void Necromancer::clearMState(){
    // std::cout <<"Necromancer clearMState" << std::endl;
    MagicState* tmp = this->mState;
    this->mState = NULL;
    delete (tmp);
};