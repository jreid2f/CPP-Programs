/*Joey Reidell
3/12/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <cstdio>
#include <stack>
#include <cstdlib>
#include <iomanip>
using namespace std;

// WrapArrayDeep Class

class WrapArrayDeep{
private:
	char * pch;

public:
	// constructor
	WrapArrayDeep() {
		pch = new char[5];
		*pch = 97;
		*(pch + 1) = 98;
		*(pch + 2) = 99;
		*(pch + 3) = 100;
		*(pch + 4) = 101;
		
	}
	// copy constructor
	WrapArrayDeep(const WrapArrayDeep& wad) {
		pch = new char[5];
		for (int i = 0; i < 5; i++) {
			pch[i] = wad.pch[i];
		}
		
	}
	// set method
	void setWrapArrayDeep(int a, int b, int c, int d, int e)
	{
		pch = new char[5];
		*pch = a;
		*(pch + 1) = b;
		*(pch + 2) = c;
		*(pch + 3) = d;
		*(pch + 4) = e;
	}
	// display method
	void displayWrapArrayDeep() {
		for (int i = 0; i < 5; i++) {
			cout << pch[i] << " ";
		}
		cout << endl;
	}

	// Destructor Method 

	/*~WrapArrayDeep() {
		cout << "calling destructor for WrapArrayDeep" << endl;
		delete[] pch;
	}
	*/
	

};

// WrapArrayShallow Class

class WrapArrayShallow {
private:
	char * pca;

public:
	// constructor
	WrapArrayShallow() {
		pca = new char[5];
		pca[0] = 'a';
		pca[1] = 'b';
		pca[2] = 'c';
		pca[3] = 'd';
		pca[4] = 'e';
	}
	// copy constructor
	WrapArrayShallow(const WrapArrayShallow& was) {
		this->pca = was.pca;
	}
	// set method
	void setWrapArrayShallow(int a, int b, int c, int d, int e) {
		pca[0] = a;
		pca[1] = b;
		pca[2] = c;
		pca[3] = d;
		pca[4] = e;
	}
	// display method
	void displayWrapArrayShallow()
	{
		for (int i = 0; i < 5; i++)
			cout << *(pca + i) << " ";
		cout << endl;
		
	}

	// Destructor Method

	/*~WrapArrayShallow() {
		cout << "calling destructor for WrapArrayShallow" << endl;
		delete[] pca;
	}
	*/
};

int main()
{
	cout << "this program section uses 3 variables\n" << "i = 7, pi a pointer to i and ppi a pointer to pi" << endl;
	int i = 7;
	int *pi;
	pi = &i;
	
	cout << "\npi = " << pi << endl;
	cout << "dereference pi " << *pi << endl;
	cout << "address of pi " << &pi << endl;
	cout << "address of i " << &i << endl;
	
	int **ppi;
	ppi = &pi;
	
	cout << "\nppi = " << ppi << endl;
	cout << "dereference of ppi " << *ppi << endl;
	cout << "address of ppi " << &ppi << endl;
	cout << "double dereference of ppi " << **ppi << endl;

	cout << "\nthis section instantiates a wrapper class for a dynamic array of 5 elements" << endl;
	
	cout << "WrapArrayDeep 1" << endl;
	WrapArrayDeep deep1;
	deep1.displayWrapArrayDeep();
	
	cout << "WrapArrayDeep 2 created using the copy constructor on 1" << endl;
	WrapArrayDeep deep2(deep1);
	deep2.displayWrapArrayDeep();
	
	cout << "after changing the contents of WrapArrayDeep 1, 1 and 3 =" << endl;
	WrapArrayDeep deep3(deep1);
	deep1.setWrapArrayDeep(123, 124, 125, 126, 127);
	deep1.displayWrapArrayDeep();
	deep3.displayWrapArrayDeep();

	cout << "\nNow doing the same thing with WrapArrayShallow" << endl;
	
	cout << "\nWrapArrayShallow 1" << endl;
	WrapArrayShallow shallow1;
	shallow1.displayWrapArrayShallow();
	
	cout << "WrapArrayShallow 2 created using the copy constructor on 1" << endl;
	WrapArrayShallow shallow2(shallow1);
	shallow2.displayWrapArrayShallow();

	cout << "after changing the contents of WrapArrayShallow 1, 1 and 3 =" << endl;
	WrapArrayShallow shallow3(shallow1);
	shallow1.setWrapArrayShallow(123, 124, 125, 126, 127);
	shallow1.displayWrapArrayShallow();
	shallow3.displayWrapArrayShallow();

	system("pause");
	return 0;
}
