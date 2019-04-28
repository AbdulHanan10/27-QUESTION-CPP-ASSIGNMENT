#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 13

	int arr[5];
	int counter = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << counter << ": ";
		cin >> arr[i];
		++counter;
	}

	int x;
	bool inarray = false;
	int index;
	cout << "enter number x to check if its in the array: ";
	cin >> x;
	for (int j = 0; j < 5; j++) {

		if (arr[j] == x) {
			inarray = true;
			cout << "found in index: " << j;
		}
	}

	if(inarray==false) {
		cout << "not found in array";
	}
	_getch();
}