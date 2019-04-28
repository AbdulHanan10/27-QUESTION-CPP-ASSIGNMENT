#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 5


for (int i = 1; i > 0; i++) {

	int a;
	cout << "enter a character" << endl;
	a= _getch();

	if (isalpha(a)) {
		cout << "character is an alphabet\n";
	}
	else if (isdigit(a)) {
		cout << "character is a digit\n";
	}
	else if (isspace(a)) {
		cout << "character is space\n";
	}
	else if (a==27) {
		break;

	}
	else{ cout << "other special character\n"; }

}
	
	_getch();
}