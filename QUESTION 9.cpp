#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

 //QUESTION 9

	int thenumber;

	cout << "enter a number to display all even values up to that: ";
	cin >> thenumber;

	cout << "\n\n";

	if (thenumber > 0) {
		for (int i = 2; i <= thenumber; i = i + 2) {
			cout << i << ", ";

		}
	}

	else { cout << "Enter valid number"; }


	_getch();
}