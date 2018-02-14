/*Joey Reidell
4/10/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
using namespace std;

int main() {

	string name;

	map<string, string> person;

	person["Paul Brown"] = "123456790";
	person["Mary Smith"] = "123456791";
	person["John Smith"] = "123456789";
	person["Lisa Brown"] = "123456792";
	
	cout << "Person 123-45-6790: Paul Brown" << endl;
	cout << "Person 123-45-6791: Mary Smith" << endl;
	cout << "Person 123-45-6789: John Smith" << endl;
	cout << "Person 123-45-6792: Lisa Brown" << endl << endl;

	map<string, string>::const_iterator iter;
	cout << "Iterating through list..." << endl;
	for (iter = person.begin(); iter != person.end(); iter++)
		cout << iter->second << ": " << iter->first << endl;

	cout << endl;


	cout << "Searching for John Brown" << endl;
	name = "John Brown";
	if (person.find(name) != person.end()) {
		cout << name << " found " << person[name] << endl << endl;
	}
	else if (person.find(name) == person.end()) {
		cout << name << " not found" << endl << endl;
	}

	cout << "Searching for Paul Brown" << endl;
	name = "Paul Brown";
	if (person.find(name) != person.end()) {
		cout << name << " found " << person[name] << endl << endl;
	}
	else if (person.find(name) == person.end()) {
		cout << name << " not found" << endl << endl;
	}

	system("pause");
	return 0;
}