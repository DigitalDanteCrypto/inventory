#include <iostream>
#include "Inventory.h"
#include "HealthPotion.h"
#include "Map.h"
#include "Sword.h"
#include "Bow.h"
#include "ForcePotion.h"
void Inventory::printMenu() {
    items.emplace_back(new Map("Mordor"));
    items.emplace_back(new HealthPotion());
    items.emplace_back(new ForcePotion());
    items.emplace_back(new Sword());
    items.emplace_back(new Bow());
    bool menuIsOpen = true;
    int userInput;
//Displaying Menu
do {
    std::cout << "Welcome to your inventory" << std::endl;
    std::cout << "Press 1 To Display inventory" << std::endl;
    std::cout << "Press 2 to Use Health Potion" << std::endl;
    std::cout << "Press 3 to Use Force Potion" << std::endl;
    std::cout << "Press 4 to Equip Weapon : Sword " << std::endl;
    std::cout << "Press 5 to Equip Weapon : Bow " << std::endl;
    //Make a custom choice for the map to use
    std::cout << "Press 6 to Use Map" << std::endl;
    std::cout << "Press 7 to exit menu " << std::endl;
    std::cin >> userInput;
    int i = 0;
    switch (userInput) {
        case 1:
            std::cout << "Displaying Inventory" << std::endl;
            for (const auto &item: items) {
                item->Use();
                std::cout << std::endl;
            }
            break;
        case 2:
            for (const auto &item: items) {

                if (isAHealthPotion(item)) {
                    item->Use();
                    items.erase(items.begin() + i);
                }
                i++;
            }
            break;
        case 3:
            for (const auto &item: items) {
                if (isForcePotion(item)) {
                    item->Use();
                    items.erase(items.begin() + i);
                }
                i++;
            }
            break;
        case 4:
            for (const auto &item: items) {
                if (isWeaponExistSword(item)) {
                    item->Use();
                    std::cout << std::endl;
                }
            }
            break;
        case 5:
            for (const auto &item: items) {

                if (isWeaponExistBow(item)) {
                    item->Use();
                    std::cout << std::endl;
                }
            }
            break;
        case 6:
            for (const auto &item: items) {
                if (isMap(item)) {
                    item->Use();
                    std::cout << std::endl;
                }
            }
            break;
        case 7:
            menuIsOpen = false;

            break;
        default:
            std::cout << "EROORRRRR " << std::endl;
            break;
    }
} while(menuIsOpen);
}
bool Inventory::isAHealthPotion(Item* item) {
    HealthPotion* p = dynamic_cast<HealthPotion*>(item);
    if (p != nullptr) {
        return true;
    }
    else {
        return false;
    }
}
bool Inventory::isForcePotion(Item* item) {
    ForcePotion* p = dynamic_cast<ForcePotion*>(item);
    if (p != nullptr) {
        return true;
    }
    else {
        return false;
    }
}
    bool Inventory::isWeaponExistSword(Item* item) {
        Sword* p = dynamic_cast<Sword*>(item);
        if (p != nullptr) {
            return true;
        }
        else {
            return false;
        }
    }
bool Inventory::isWeaponExistBow(Item* item) {
    Bow* p = dynamic_cast<Bow*>(item);
    if (p != nullptr) {
        return true;
    }
    else {
        return false;
    }
}
bool Inventory::isMap(Item* item) {
    Map* p = dynamic_cast<Map*>(item);
    if (p != nullptr) {
        return true;
    }
    else {
        return false;
    }
}

