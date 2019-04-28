#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 2


char a;
cout << "input the character" << endl;
a = _getch();

if (isalpha(a)) {
	cout << "character is an alphabet";
}
else if (isdigit(a)) { cout << "character is a digit"; }
else if (isspace(a)) { cout << "character is space"; }
else if (a == 27) { cout << "character is the escape key"; }
else { cout << "you entered other special character"; }
	
	_getch();
}