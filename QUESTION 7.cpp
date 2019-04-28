#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 7

for (int i = 1; i > 0; i++) {
	cout << "\t\t\t  Menu\n"
		<< "\t\tPress a to Add two numbers\n" << "\t\t\b\bPress s to subtract two numbers\n" << "\t\t\b\b\b\bPress 2 to calculate Square of number\n"
		<< "\tPress 3 to calculate square root of the number\n" << "\t\tpress escape to exit program\n";

	char choice;
	choice = _getch();

	switch (choice) {

	case 'a':

		int num1;
		int num2;

		cout << "enter number";
		cin >> num1;
		cout << "enter number";
		cin >> num2;
		cout << "sum of both numbers is: " << num1 + num2 << endl;
		break;

	case 's':

		int num3;
		int num4;
		cout << "enter number";
		cin >> num3;
		cout << "enter number";
		cin >> num4;
		cout << "subtraction of both numbers is: " << num3 - num4 << endl;
		break;

	case '2':

		int num5;
		cout << "enter a number to find its square";
		cin >> num5;
		cout << "square of the number is : " << num5 * num5 << endl;
		break;

	case '3':

		int num6;
		cout << "enter a number to find its squareroot";
		cin >> num6;
		cout << "the squareroot of the number is: " << sqrt(num6) << endl;

	case (char)27:

		break;

	default:

		cout << "enter valid input";
	}
	if (choice == 27) { break; }
}
	
	_getch();
}