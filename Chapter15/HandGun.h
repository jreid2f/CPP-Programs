#pragma once
/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#ifndef HANDGUN_H
#define HANDGUN_H

#include <string>
#include "Gun.h"
using std::string;

namespace Weapon 
{
	class HandGun : public Gun{
	private:
		string grips;
		string sights;
		bool laser;

	public:
		HandGun();
		HandGun(const string& theManufacturer, const string& theCaliber, const string& theGrips, 
			const string& theSights, bool aLaser);
		void setGrips(const string& theGrips);
		void setSights(const string& theSights);
		void setLasers(bool aLazer);
		string getGrips() const;
		string getSights() const;
		bool getLazer() const;
		string printLaser() const;
		virtual void print() const;

	};

}

#endif
