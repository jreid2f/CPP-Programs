/*Joey Reidell
4/9/16
CIT 245-Data Structures and Programming C++*/

#include <string>
#include "HandGun.h"
using std::string;

namespace Weapon
{
	HandGun::HandGun() : Gun(), grips("no grips"), sights("no sights"), laser(false)
	{}
	HandGun::HandGun(const string& theManufacturer, const string& theCaliber, const string& theGrips,
		const string& theSights, bool aLaser) : Gun(theManufacturer, theCaliber), grips(theGrips), 
		sights(theSights), laser(aLaser)
	{}
	void HandGun::setGrips(const string& theGrips)
	{
		grips = theGrips;
	}
	void HandGun::setSights(const string& theSights)
	{
		sights = theSights;
	}
	void HandGun::setLasers(bool aLaser)
	{
		laser = aLaser;
	}
	string HandGun::getGrips() const
	{
		return grips;
	}
	string HandGun::getSights() const
	{
		return sights;
	}
	bool HandGun::getLazer() const
	{
		return laser;
	}
	string HandGun::printLaser() {
		if (laser) {
			return "laser";
		}
		else {
			return "no laser";
		}
	}
}