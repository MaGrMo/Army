#include "Spell.h"

Spell::Spell(){
    // this->isAttakable = true;
    // this->effect = effect;
    // this->manaCost = manaCost;
};

Spell::~Spell(){
std::cout<< "spell destructor" <<std::endl;
};
bool Spell::isAttakable(){
    return this->attakable;
}
int Spell::getEffect() const{
     return this->effect;
};

int Spell::getManaCost() const{
     return manaCost;
};
void Spell::useSpell(Unit* target){
     std::cout << "Spell useSpell() "<<std::endl;
};
std::string Spell::getName(){
    return "Spell";
};
void Spell::setEffect(int effect){
    this->effect = effect;
};