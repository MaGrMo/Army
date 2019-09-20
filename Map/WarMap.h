#ifndef WARMAP_H
#define WARMAP_H
#include <iostream>
#include <map>

class WarMap{
private:
    WarMap();
    static WarMap* instance;
public:
    static WarMap* getInstance();
    ~WarMap();
};
#endif // WARMAP_H
