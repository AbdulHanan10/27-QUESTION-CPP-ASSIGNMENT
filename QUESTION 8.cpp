#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 8

int number;
int remainders = 0;
cout << "Enter the number to check if its prime:" << endl;
cin >> number;

if (number>0) {

	for (int i = 1; i <= number; i++) {

		if (number % i == 0) {
			remainders++;
		}

	}
	if (remainders == 2) {
		cout << "\nnumber is prime";
	}
	else { cout << "\nnumber is not prime"; }
}

else {
	cout << "entered value is not prime";
}

	_getch();
}