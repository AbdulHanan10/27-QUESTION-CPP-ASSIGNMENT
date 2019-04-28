#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

	//QUESTION 1 PART 2

	char a;
	cout << "input a character to check if its an alphabet or digit" << endl;
	cin>>a;


	if (isalpha(a) ){
		cout << "a is an alphabet";
	}
	else if (isdigit(a)) {
		cout << "a is digit\n";
	}
	else { cout << "not a number or alphabet"; }
	
	_getch();
}