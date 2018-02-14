/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#include "Gun.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

namespace Weapon
{
	Gun::Gun() : manufacturer("no manufacturer"), caliber("no caliber")
	{}

	Gun::Gun(const string& theManufacturer, const string& theCaliber)
		: manufacturer(theManufacturer), caliber(theCaliber)
	{}

	string Gun::getManufacturer() const {
		return manufacturer;
	}

	string Gun::getCaliber() const {
		return caliber;
	}

	void Gun::setManufacturer(const string& newManufacturer) {
		manufacturer = newManufacturer;
	}

	void Gun::setCaliber(const string& newCaliber) {
		caliber = newCaliber;
	}
	void Gun::print() const {
		cout << "Gun: " << manufacturer << ", " << caliber << endl;
	}
}