#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 16

  int arr[5];


for (int i = 0; i < 5; i++) {

	cout << "enter number: ";
	cin >> arr[i];
}

int sum=0;

for (int i = 0; i < 5; i++) {

	sum = sum + arr[i];

}

cout << "the average of the numbers is: " << sum / 5;
	_getch();
}