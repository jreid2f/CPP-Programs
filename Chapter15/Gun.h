#pragma once
/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#ifndef GUN_H
#define GUN_H

#include <string>
using std::string;

namespace Weapon
{
	class Gun
	{
	private:
		string manufacturer;
		string caliber;

	public:
		Gun();
		Gun(const string& theManufacturer, const string& theCaliber);
		string getManufacturer() const;
		string getCaliber() const;
		void setManufacturer(const string& newManufacturer);
		void setCaliber(const string& newCaliber);
		virtual void print() const;

	};
}

#endif 
