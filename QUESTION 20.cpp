#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 20
  char para[100];
cout << "enter paragraph";
cin.getline(para, 101);

int c;
int words=0;
int sentence=0;
for (int i = 0; i < 100; i++) {
	c = para[i];
	if (c == 46) {

		sentence++;
	}

	if (c == 32) {

		words++;
	}
}
cout << "words= " << words+1;
cout << "sentence= " << sentence;
	

	_getch();
}