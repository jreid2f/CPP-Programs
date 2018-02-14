/*Joey Reidell
1/31/15
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int weight, radius, retry;
	double volume, bForce, pI = 3.141592;
	double  waterW = 62.4;

	// The loop is controlled by whether a 1 or a 0 is entered to either restart or stop it.
	do {
		cout << "This program computes Buoyant Force in water given sphere radius.\n"
			 << "Based on the weight of the sphere, it determines whether the sphere floats or sinks.\n";
		// The user enters in values for both the radius and the weight.
		cout << "\nEnter the radius of the sphere.\n";
		cin >> radius;
		cout << "You entered " << radius << "\n"
			<< "\nEnter the weight of the sphere.\n";
		cin >> weight;
		cout << "You entered " << weight << "\n";
		// Now to calculate the volume of the radius.
		volume = (double)(1.33333 * pI * (pow(radius, 3)));
		// Now figure out the Buoyant Force and display the result
		bForce = (double)(volume * waterW);
		cout << "Buoyant Force = " << bForce << "\n";
		// Determines whether the Buoyant Force is above the weight or below.
		if (bForce >= weight) {
			cout << "Egads, it floats!\n";
		}

		else {
			cout << "It sunk...\n";
		}
		cout << "Recalculate? (1 = yes, 0 = exit) \n";
		cin >> retry;
	} while (retry == 1);
	
	system("pause");
	
	return 0;
}