/*Joey Reidell
4/9/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <cstdlib>
#include <string>
#include "Revolver.h"
#include "Pistol.h"
using namespace std;
using Weapon::Revolver;
using Weapon::Pistol;

int main() {

	Revolver rev("Smith & Wesson", "0.357", "hoague grips", "Trijicon", true, false, 6);
	Pistol pis("Glock", "9mm", "manufactuers grip", "3 dot sights", false, true);

	rev.print();
	pis.print();

	system("pause");
	return 0;
}