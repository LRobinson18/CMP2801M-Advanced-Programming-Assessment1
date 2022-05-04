#pragma once
#include "Item.h"
#include <string>

class Beverage : public Item
{
public:
    int volume = 0;
    float abv = 0;
public: 
    Beverage(std::string _name, float _price, int _calories, int _volume, float _abv);
    std::string toString() override;
};

