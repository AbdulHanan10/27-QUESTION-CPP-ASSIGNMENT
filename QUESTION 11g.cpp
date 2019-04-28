#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

 //QUESTION 11)g)

	 double rows;
	 cout << "enter the number of rows you want for diamond (odd numbers only)";
		 cin >> rows;

		 float halftriangle = ((rows / 2) + 0.5);
		 int remainder = (int)rows % 2;

		 if ( remainder != 0) {
			 for (int i = 1; i <= halftriangle; i++) {
				 for (int j = halftriangle; j >= i; j--) {
					 cout << " ";
				 }
				 for (int k = 1; k <= i; k++) {

					 cout << "* ";
				 }
				 cout << endl;
			 }

			 for (int i = halftriangle-1; i >= 1; i--) {
				 for (int k = i; k <=halftriangle ; k++) {

					 cout << " ";
				 }
				 for (int j = i; j >= 1; j--) {

					 cout << "* ";
				 }
				 cout << endl;
			 }
		 }
		 else {
			 cout << "invalid number. Odd numbers only";
		 }

	_getch();
}