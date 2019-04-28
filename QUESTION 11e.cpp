#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

 //QUESTION 11)e)

	 int rows;
	 cout << "enter the number of rows you want: ";
	 cin >> rows;

	 for (int i = 1; i <= rows; i++) {
		 for (int j = rows; j >= i; j--) {

			 cout << j;
		 }
		cout<< endl;
	 }

	 


	_getch();
}