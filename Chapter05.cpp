/*Joey Reidell
2/14/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	// sets randomizer
	srand((int)time(NULL));
	int retry, size = 20;
	int one = 0, two = 0, three = 0,
		four = 0, five = 0, six = 0,
		sev = 0, eig = 0, nine = 0, ten = 0;

	cout << "This program generates random numbers and tabulates the results" << endl;
    int rArray[20];
	do {
		for (int i = 0; i < size; i++) {
            // array is loaded with 20 random integers 
			rArray[i] = rand() % 10 + 1;
			
		}
		
		for (int i = 0; i < size; i++) {
			// sorts out the array from least to greatest
            std::sort(rArray, rArray + 20);
			// displays the array sorted
			cout << "rArray" << " [ " << i << " ] " << rArray[i];
			cout << endl;
			// checks each element in the array and counts which number it is
			switch (rArray[i])
			{
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				sev++;
				break;
			case 8:
				eig++;
				break;
			case 9:
				nine++;
				break;
			case 10:
				ten++;
				break;
			}
		}
		// displays the results of how many times a number appeared in the array
		cout << endl
			<< " N Count" << endl
			<< " 1: " << one << endl
			<< " 2: " << two << endl
			<< " 3: " << three << endl
			<< " 4: " << four << endl
			<< " 5: " << five << endl
			<< " 6: " << six << endl
			<< " 7: " << sev << endl
			<< " 8: " << eig << endl
			<< " 9: " << nine << endl
			<< "10: " << ten << endl;
		    // resets counter
		    one = 0, two = 0, three = 0,
			four = 0, five = 0, six = 0,
			sev = 0, eig = 0, nine = 0, ten = 0;
			// asks to try again
		cout << "Try again? (1 = Yes, 0 = Exit)" << endl;
		cin >> retry;
	} while (retry == 1);
	
	system("pause");
	return 0;
}