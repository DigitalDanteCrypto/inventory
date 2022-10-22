#pragma once
#import "Item.h"

class Map : public Item {

    std::string _mapName;

public :

    explicit Map(std::string);
    void Use() override;

};
