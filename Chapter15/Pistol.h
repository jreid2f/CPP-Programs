#pragma once
/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#ifndef PISTOL_H
#define PISTOL_H

#include <string>
#include "HandGun.h"
using std::string;

namespace Weapon
{
	class Pistol : public HandGun
	{
	private:
		bool semiauto;

	public:
		Pistol();
		Pistol(const string& theManufacturer, const string& theCaliber, const string& theGrips,
			const string& theSights, bool aLaser, bool aSemiAuto);
		void setSemiAuto(bool aSemiAuto);
		bool getSemiAuto() const;
		string printSemiAuto() const;
		void print() const;

	};
	
}

#endif