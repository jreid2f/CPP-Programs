/*Joey Reidell
4/14/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <cstdlib>
#include <string>
#include "Revolver.h"
#include "Pistol.h"
using namespace std;
using Weapon::Revolver;
using Weapon::Pistol;
using Weapon::HandGun;

int main() {
	int numOfGuns = 2;
	HandGun *gunCabinet[2];

	Revolver rev("Smith & Wesson", "0.357", "hoague grips", "Trijicon", true, false, 6);
	Pistol pis("Glock", "9mm", "manufactuers grip", "3 dot sights", false, true);

	gunCabinet[0] = &rev;
	gunCabinet[1] = &pis;
	
	cout << "My Gun Cabinet Contains: " << endl;

	for (int i = 0; i < 2; i++) {
		gunCabinet[i]->print();
	}

	system("pause");
	return 0;
}