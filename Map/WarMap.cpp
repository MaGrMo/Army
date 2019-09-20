#include "WarMap.h"
WarMap* WarMap::instance = NULL;
WarMap::WarMap(){
    
};
WarMap*  WarMap::getInstance(){
    if(!instance){
        instance = new WarMap();
        return instance;
    }
    return instance;
};
WarMap::~WarMap(){

};
