/*Joey Reidell
3/5/16
CIT 245-Data Structures and Programming C++*/

#include <iostream>
#include <cstdio>
#include <stack>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
	int go;
	char* s = (char *)malloc(80 * sizeof(char));
	cout << "This program reverses a string using the STL stack" << endl;
	do {
	cout << "Enter your string of less than 80 characters followed by an ENTER" << endl;
	cin.getline(s, 81, '\n');
	stack<char> S;
	for (int i = 0; i < (int)strlen(s); i++)
	{
		S.push(s[i]);
	}
	for (int i = 0; i < (int)strlen(s); i++)
	{
		s[i] = S.top();
		S.pop();
	}
	cout << s << endl;
	s[0] = '\0';
	cout << "Enter another? 1 = continue. Anything else to stop" << endl;
	cin >> go;
	getchar();
	}while (go == 1);
	delete s;
	system("pause");
	return 0;
}

