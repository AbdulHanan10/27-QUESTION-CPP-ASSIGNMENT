#include<iostream>
#include<conio.h>
#include<cctype>
#include<cmath>
#include<string>
using namespace std;
void main() {
	//**********ASSIGNMENT 3*************

//QUESTION 22
 
int arr[10];
int even[10];
 
 
int i = 0;
for (i = 0; i < 10; i++) {
 
    cout << "enter number: ";
    cin >> arr[i];
}
 
i = 0;
int anum=0;
 
for (int j=0; j < 10; j++) {
    anum= arr[j];
    if (anum % 2 == 0) {
        even[i] = arr[j];
        ++i;
    }
}
 
cout << "even numbers in the array: \n";
 
for (int k = 0; k < i; k++) {
    cout << even[k]<<endl;
}
	_getch();
}