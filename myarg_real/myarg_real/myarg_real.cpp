// myarg_real.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void stage1(int &x)
{
	string uporabnisko = "admin" ;
	string geslo= "admin";
	string upo;
	string ges;

	cout << "Username: ";
	cin >> upo;
	if (upo == uporabnisko)
	{
		cout << "\nPassword:";
		cin>>ges;

		if (ges == geslo)
		{
			cout << "\nAccess granted!"<<endl;
			x = 1;
		}
	}
	else
	{
		cout << "\nLogin failed!" << endl;
		x = 0;
	}
}

void exit()
{
	string yn;
	string y = "y";
	string n = "n";

	cout << "Exit? (y/n)"<<endl;
	cin >> yn;
	if (yn==y)
	{
		cout << "goodbye"<<endl;
	}

}
int main()
{
	int key1;

	stage1(key1);
	exit();

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
