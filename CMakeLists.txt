cmake_minimum_required(VERSION 3.23)
project(inventory)

set(CMAKE_CXX_STANDARD 14)

add_executable(inventory main.cpp Item.cpp Item.h Potion.cpp Potion.h HealthPotion.cpp HealthPotion.h ForcePotion.cpp ForcePotion.h Inventory.cpp Inventory.h Map.cpp Map.h Weapon.cpp Weapon.h Sword.cpp Sword.h Bow.cpp Bow.h)
