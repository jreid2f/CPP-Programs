/*Joey Reidell
2/10/16
CIT 245-Data Structures and Programming C++*/


#include <iostream>
#include <cstdlib>
#include <utility>
using namespace std;

//Figure out the gcd of the numerator and denominator entered
int gcd(int n, int d) {
	int t;
	while (d != 0)
	{
		t = d;
		d = n % d;
		n = t;
	}
	return n;
}

//Calls the gcd method and returns that number and reduces the numbers entered
void reduce(int& n, int& d)
{
	int g;
    g = gcd(n, d);

	cout << "The greatest common denominator is " << g << endl;
	n = n / g;
	d = d / g;
	
	
}


int main() {
	
	int retry, num, den;

	do {
		//Enter the numerator
		cout << "Enter the numerator" << endl;
		cin >> num;
		//Enter the denominator
		cout << "Enter the denominator" << endl;
		cin >> den;
		//Pass the two numbers into the reduce method
		reduce(num, den);
		//Displays the reduced fraction
		std::cout << "Your fraction reduced is " << num << "/" << den << std::endl;
		//Asks if you want try another fraction
		cout << "Try again? (1 = Yes, 0 = Exit)" << endl;
		cin >> retry;
		cout << endl;
	} while (retry == 1);
	
	system("pause");
	return 0;
}

