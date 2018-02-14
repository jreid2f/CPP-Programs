/*Joey Reidell
4/9/16
CIT 245-Data Structures and Programming C++*/

#include "Gun.h"
#include <string>
using std::string;

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
}