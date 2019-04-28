#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************


//QUESTION 19

	char str[5];

	cout << "enter 5 characters: ";
	cin.getline(str,6);

	char c;
	for (int i = 0; i < 5; i++) {

		c = str[i];
		putchar(toupper(c));

	}
	

	_getch();
}