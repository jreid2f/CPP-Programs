/*Joey Reidell
4/10/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <cstdlib>
#include  <string>
#include <algorithm>
#include <vector> 
#include <iomanip>
using namespace std;


template<class BS, class N>
bool binarySearch(BS first, BS end, const N& value) {
	first = std::lower_bound(first, end, value);
	return (first != end && !(value<*first));
}

int main() {
	const int numSize = 11;
	int numbers[numSize] = { 0, 1, 1, 2, 3, 5, 6, 13, 21, 32, 55 };
	vector<int> vec(numbers, numbers + 11);
	cout << "Integer test array contains:" << endl;
	for (int i = 0; i < numSize; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;

	for (int i = -1; i <= 7; i++) {
		if (binarySearch(vec.begin(), vec.end(), i)) {
			cout << i << " is in the array " << endl;
		}
		else {
			cout << i << " is NOT in the array" << endl;
		}
	}
	cout << endl;

	const int stringSize = 4;
	string stringArray[stringSize] = {"heads", "knees", "shoulders", "toes"};
	vector<string> vec2(stringArray, stringArray + 4);
	cout << "String test array contains:" << endl;
	for (int i = 0; i < stringSize; i++) {
		cout << stringArray[i] << " ";
	}
	cout << endl;

		if (binarySearch(vec2.begin(), vec2.end(), "elbows")) {
			cout << "elbows is in the array" << endl;
		}
		else {
			 cout << "elbows is NOT in the array" << endl;
		}

		if (binarySearch(vec2.begin(), vec2.end(), "knees")) {
			cout << "knees is in the array" << endl;
		}
		else {
			cout << "knees is NOT in the array" << endl;
		}

	system("pause");
	return 0;
}