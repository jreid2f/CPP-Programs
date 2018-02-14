/*Joey Reidell
2/23/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Counter {
private:
	int count;
	static int numInvoked;

public:
	Counter()
	{
		// default constructor set to 0
		count = 0;
	}
	Counter(int num)
	{
		// constructor set to number given in main
		count = num;
	}
	void inc()
	{
		// increments count and increments the number of times the method is invoked
		++count;
		++numInvoked;
	}
	void dec()
	{
		// decrements count and increments the number of times the method is invoked
		--count;
		++numInvoked;
	}
	void displayC1()
	{
		// displays the count and the number of times c1 was incremented or decremented 
		cout << "Current Count : " << count << endl;
		cout << "total increments and decrements: " << numInvoked << endl;
	}
	void displayC2()
	{
		// displays the count and the number of times c2 was incremented or decremented 
		cout << "Current Count : " << count << endl;
		cout << "total increments and decrements: " << numInvoked << endl;
	}
};
// static variable initialized
int Counter::numInvoked = 0;

int main() {
	
	// c1 is default constructor set at 0 and c2 is another constructor set at 200
	Counter c1, c2(200);
	cout << "Current State of C1 (created with the default constructor)" << endl;
	c1.displayC1();
	cout << "Current State of C2 (created as C2(200))" << endl;
	c2.displayC2();
	cout << "Current State of C1 after 85 inc()" << endl;
	for (int i = 0; i < 85; i++)
	{
		// increments c1 85 times
		c1.inc();
	}
	c1.displayC1();
	cout << "Current State of C2 after 242 dec()" << endl;
	for (int i = 0; i < 242; i++)
	{
		// decrements c2 242 times
		c2.dec();
	}
	c2.displayC2();
	
	system("pause");
	return 0;
}