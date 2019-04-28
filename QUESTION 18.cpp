#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 18
 
char str[5];
cout << "enter 5 characters: ";
cin.getline(str, 6);
 
 
cout << "Characters entered: ";
for (int i = 0; i < 5; i++) {
   
    cout << str[i];
}
 
cout << endl;
char c;
 
int alpha = 0;
int dig = 0;
int special = 0;
for (int j = 0; j < 5; j++)
{
    c = str[j];
    if (isalpha(c)){
        alpha++;
    }
    else if (isdigit(c)) { dig++; }
   
    else { special++;}
 
}
 
cout << "alphabets: " << alpha << endl;
cout << "digits: " << dig << endl;
cout << "special characters: " << special << endl;
	_getch();
}