#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 24

 int arrr[5];
	
	int arrr2[5];

	cout << "enter the digits to reverse add them to another array\n";

	int counter = 1;
	int i = 0;
	for ( i = 0; i < 5 ; i++) {
		cout << "enter number " << counter << ": ";
		cin >> arrr[i];
		counter++;
	}

	i = 1;
	cout << "stored in reverse order in 2nd array i.e : "<<endl;
	for (int j=4; j >=0; j--) {
		arrr2[j] = arrr[i];

		cout << arrr[j] << endl;

		i++;
	}
	_getch();
}