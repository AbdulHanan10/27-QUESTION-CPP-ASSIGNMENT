#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 26

int arr[10];

cout << "enter the digits to order them descending\n";

int counter = 1;

for (int i = 0; i < 10; i++) {
	cout << "enter number " << counter << ": ";
	cin >> arr[i];
	counter++;
}
int temp;

for (int i = 0; i < 9; i++) {

	int max = arr[i];
	int currloc = i;

	for (int j = i; j < 10; j++) {

		if (arr[j] > max) {

			max = arr[j];
			currloc = j;
		}
	}
	temp = arr[i];
	arr[i] = arr[currloc];
	arr[currloc] = temp;
}
cout << "array in descending order: \n";

for (int i = 0; i < 10; i++) {

	cout << arr[i];
	cout << endl;
}
	_getch();
}