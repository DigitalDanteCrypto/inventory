#include <iostream>
#include "Map.h"

void Map::Use() {
std::cout << "Using the map of : " << _mapName << std::endl;
}


Map::Map(std::string mapName) {
    _mapName = mapName;

}
