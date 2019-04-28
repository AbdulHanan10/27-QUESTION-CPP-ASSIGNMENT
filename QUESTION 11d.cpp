#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

 //QUESTION 11)d)

	int rows;
	cout << "enter the number of rows you want";
	cin >> rows;

	for (int i = rows; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;
	}
	 


	_getch();
}