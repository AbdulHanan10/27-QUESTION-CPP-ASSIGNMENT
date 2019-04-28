#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

QUESTION 21
int arr[10];
int arr2[10];


int i = 0;
for (i = 0; i < 10; i++) {

	cout << "enter number: ";
	cin >> arr[i];
}

i = 0;
for (int j = 0; j < 10; j++) {
	arr2[j] = arr[i];
	i++;

}
//to check<:
cout << arr[5] << endl;
cout << arr2[5] << endl;

	_getch();
}