#pragma once
/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#ifndef REVOLVER_H
#define REVOLVER_H

#include <string>
#include "HandGun.h"
using std::string;
#include <iostream>

namespace Weapon
{
	class Revolver : public HandGun 
	{
	private:
		bool singleAction;
		int numberOfRounds;

	public:
		Revolver();
		Revolver(const string& theManufacturer, const string& theCaliber, const string& theGrips,
			const string& theSights, bool aLaser, bool theSingleAction, int theNumberOfRounds);
		bool getSingleAction() const;
		int getNumberOfRounds() const;
		void setSingleAction(bool theSingleAction);
		void setNumberOfRounds(int theNumberOfRounds);
		string printSingleAction() const;
		void printNumberOfRounds() const;
		void print() const;
	};
}

#endif // !REVOLVER_H
