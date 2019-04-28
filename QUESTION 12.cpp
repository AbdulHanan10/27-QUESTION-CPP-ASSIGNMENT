#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 12

	int arr[5];
	int counter = 1;

	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << counter << ": ";
		cin >> arr[i];
		++counter;
	}
	cout << "\n\n Numbers Entered Are: ";
	for (int j = 0; j < 5; j++) {

		cout << arr[j] << ",";
	}

	_getch();
}