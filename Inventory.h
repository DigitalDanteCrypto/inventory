#pragma once
#include <vector>
#import "Item.h"
class Inventory {
public:
    std::vector<Item*> items;
    //Methods:
    void printMenu();
   bool isAHealthPotion(Item*);
   bool isForcePotion(Item*);
   bool isWeaponExistSword(Item*);
   bool isWeaponExistBow(Item*);
    bool isMap(Item*);
};
