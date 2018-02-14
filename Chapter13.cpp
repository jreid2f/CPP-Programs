/*Joey Reidell
4/9/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Toh(int diskMove, int location1, int location2, int location3) {
	if (diskMove != 0) {
		Toh(diskMove - 1, location1, location3, location2);
		cout << location1 << " to " << location2 << endl;
		Toh(diskMove - 1, location3, location2, location1);
	}
	

}

int main() {

	int disks, loop;
	do {
		cout << "enter number of disks" << endl;
		cin >> disks;
		cout << "source 1 target 2 temporary 3" << endl;
		Toh(disks, 1, 2, 3);
		cout << "2 to the " << disks << " power = " << pow(2, disks) << endl;
		cout << "Number of Moves: " << pow(2, disks) - 1 << endl;
		cout << "Continue? (1=yes 0=no)" << endl;
		cin >> loop;
	} while (loop == 1);

	system("pause");
	return 0;
}