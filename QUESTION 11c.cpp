#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//Question 11)c)

	 int rows;
	 cout << "enter the number of rows you want";
	 cin >> rows;

	 for (int i = 1; i <= rows; i++) {

		 for (int j = 1; j <= i; j++) {
			 cout << i;
		 }
		 cout << endl;
	 }


	_getch();
}