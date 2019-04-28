#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 15


  int arr[5];


for (int i = 0; i < 5; i++) {
	cout << "enter number: ";
	cin >> arr[i];

}
int min = arr[0];
for (int i = 0; i < 5; i++) {

	if (arr[i] < min) {
		min = arr[i];

	}
}
 cout << "minimum number is: " << min;



	_getch();
}