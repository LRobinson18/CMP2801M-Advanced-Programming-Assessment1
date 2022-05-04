#include "Appetiser.h"
#include <sstream>
#include <iomanip>
using namespace std;

Appetiser::Appetiser(string _name, float _price, int _calories, string _shareable, string _twoForOne) 
{
	name = _name;
	price = _price;
	calories = _calories;
	if (_shareable == "y") { shareable = true; }
	else { shareable = false; }
	if (_twoForOne == "y") { twoForOne = true; }
	else { twoForOne = false; }
}

std::string Appetiser::toString()
{
	// create a string and add all of the relevant item details to it
	std::string itemDetails;
	itemDetails += this->name + ": " + '\x9C' + to_string(this->price).substr(0,4) + ", " + to_string(this->calories) + " cal";
	if (this->shareable == true) { itemDetails += " (shareable)"; }
	if (this->twoForOne == true) { itemDetails += " (2-4-1)"; }
	return itemDetails;
};
