#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 17

  int arr[5];
int even=0;
int odd=0;

for (int i = 0; i < 5; i++) {

	cout << "enter number: ";
	cin >> arr[i];
}

for (int i = 0; i < 5; i++) {

	if (arr[i] % 2 == 0) {

		even++;
	}

	else {

		odd++;
	}
}

cout << "number of odd numbers: " << odd << endl;
cout << "number of even numbers: " << even;

	_getch();
}