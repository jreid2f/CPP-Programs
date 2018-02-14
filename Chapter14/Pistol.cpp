/*Joey Reidell
4/9/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Pistol.h"
using std::string;
using std::cout;
using std::endl;

namespace Weapon 
{
	Pistol::Pistol() : HandGun(), semiauto(false)
	{}
	Pistol::Pistol(const string& theManufacturer, const string& theCaliber, const string& theGrips,
		const string& theSights, bool aLaser, bool aSemiAuto) : HandGun(theManufacturer, theCaliber, theGrips, theSights, aLaser), 
		semiauto(aSemiAuto)
	{}
	void Pistol::setSemiAuto(bool aSemiAuto)
	{
		semiauto = aSemiAuto;
	}
	bool Pistol::getSemiAuto() const {
		return semiauto;
	}
	string Pistol::printSemiAuto() {
		if (semiauto) {
			return "semi-auto";
		}
		else {
			return "not semi-auto";
		}
	}
	void Pistol::print() {
		cout << "Pistol: " << getManufacturer() << ", " << getCaliber() << ", " << getGrips() << ", " << getSights() << ", " << printLaser() << ", " << printSemiAuto() << endl;
	}
	

}