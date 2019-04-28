#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 4

char a;
cout << "enter a character";
cin >> a;

if (isdigit(a)) {

	if (a % 2 == 0) {

		cout << "number is even";
	}
	else { cout << "number is odd"; }
}
else { cout << "entered character is not a number"; }



	
	_getch();
}