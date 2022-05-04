#pragma once
#include "Item.h"
#include <string>
using namespace std;

class Appetiser : public Item
{
public:
    bool shareable;
    bool twoForOne;
    Appetiser(string _name, float _price, int _calories, string _shareable, string _twoForOne);
    std::string toString() override;
};

