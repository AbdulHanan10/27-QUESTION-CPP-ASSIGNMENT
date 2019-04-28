#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 11)a)
	int rows;
	cout << "enter the number of rows you want for the right angle triangle: ";
	cin >> rows;
	cout << "\n\n";
		for (int i = 1; i <= rows; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
	}

	_getch();
}