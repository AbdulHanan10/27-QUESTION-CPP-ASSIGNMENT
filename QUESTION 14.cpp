#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 14

 
 int arr[5];
int max=0;

for (int i = 0; i < 5; i++) {

	cout << "enter number ";
	cin >> arr[i];

}

for (int i = 0;i < 5; i++) {


	if (arr[i] > max) {

		max = arr[i];
	}

}

cout << "the maximum number is: " << max;

	_getch();
}