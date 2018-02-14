/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Revolver.h"
using std::string;
using std::cout;
using std::endl;

namespace Weapon
{
	Revolver::Revolver() : HandGun(), singleAction(false), numberOfRounds(0)
	{}
	Revolver::Revolver(const string& theManufacturer, const string& theCaliber, const string& theGrips,
		const string& theSights, bool aLaser, bool theSingleAction, int theNumberOfRounds) : HandGun(theManufacturer, theCaliber, theGrips, theSights, aLaser),
			singleAction(theSingleAction), numberOfRounds(theNumberOfRounds)
	{}
	bool Revolver::getSingleAction() const {
		return singleAction;
	}
	int Revolver::getNumberOfRounds() const {
		return numberOfRounds;
	}
	void Revolver::setSingleAction(bool theSingleAction) {
		singleAction = theSingleAction;
	}
	void Revolver::setNumberOfRounds(int theNumberOfRounds) {
		numberOfRounds = theNumberOfRounds;
	}
	string Revolver::printSingleAction() const {
		if (singleAction) {
			return "single action";
		}
		else {
			return "double action";
		}
	}
	void Revolver::printNumberOfRounds() const{
		cout << numberOfRounds << " rounds" << endl;
	}

	void Revolver::print() const{
		cout << "Revolver: " << getManufacturer() << ", " << getCaliber() << ", " << getGrips() << ", " << getSights() << ", " << printLaser() << ", "
			<< printSingleAction() << ", ";
		printNumberOfRounds();
	}
}