#include "Beverage.h"
#include <sstream>
#include <iomanip>
using namespace std;


Beverage::Beverage(std::string _name, float _price, int _calories, int _volume, float _abv)
{
	name = _name;
	price = _price;
	calories = _calories;
	volume = _volume;
	abv = _abv;
}

std::string Beverage::toString()
{
	// create a string and add all of the relevant item details to it
	std::string itemDetails;
	itemDetails += this->name + ": " + '\x9C' + to_string(this->price).substr(0, 4) + ", " + to_string(this->calories) + " cal (" + to_string(this->volume) + "ml";
	if (this->abv != NULL) { itemDetails += ", " + to_string(this->abv).substr(0, 4) + "% abv)"; }
	else { itemDetails += ")"; }
	return itemDetails;
}
