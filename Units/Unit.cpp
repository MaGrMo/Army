#include "Unit.h"

Unit::Unit(std::string name):
    Observable(){
    // std::cout <<"Unit Construcrot" <<std::endl;
    // this->uAbility = new Ability(this);
    this->name = name;
    // this->uState = new State(this, hp, dmg);
    // this->uPAttack = new PAttack(this);

};

Unit::~Unit(){
    delete(this->uState);
    delete(this->uPAttack);
    delete(this->uAbility);
};

State* Unit::getState() const {
    return uState;
};

MagicState* Unit::getMState() {
    
    // std::cout << "UNIT getMState" << std::endl;
    return NULL;
}


void Unit::useAbility() {
    this->uAbility->useAbility();
    
};

void Unit::useAbility(Unit* victum){
    this->uAbility->useAbility(victum);
    
};

bool Unit::isBiteble(){
    return this->uState->getIsBiteble();
};
bool Unit::isUndead(){
    return this->uState->getIsUndead();
};

const std::string& Unit::getName() const{
    return this->name;
};

bool Unit::isDead(){
    if(this->uState->isDead()) {
        for (std::set<Observer*>::iterator it = observers.begin(); it != observers.end(); it++ ) {
            (*it)->update(this);
        }
    }
    return this->uState->isDead();
};

void Unit::attack(Unit* enemy){
    if (enemy == NULL) {
        return;
    }
    
    if (enemy == this) {
        return;
    }
    this->uPAttack->attack(enemy);
};

void Unit::cast(Unit* target) {
    std::cout << "you are " << this->uState->getStateName()<<" have no magic skils "<<std::endl;
};

void Unit::attach(Observer* observer){
    this->observers.insert(observer);
};

void Unit::deAttach(Observer* observer){
    if (observer == NULL) {
        return;
    }
    // std::set<Observer*>::iterator it;
    // it = observers.find(observer);
    this->observers.erase (this->observers.find(observer));
};

void Unit::clearMState() {
    std::cout <<"Unit clearMState" << std::endl;
};

// void Unit::notify(Observer* observer){
    
// };


std::ostream& operator<<(std::ostream& out, const Unit& unit){
    out << unit.getState()->getStateName()<<"{name = "<< unit.getName();
    out <<", HP = " <<unit.getState()->getHp()<< "/" <<unit.getState()->getMaxHp();
    out <<", Dmg = "<<unit.getState()->getDmg()<<"}";
    return out;
};
