/*
 * M4P2.cpp
 *
 *  Created on: Apr 13, 2020
 *      Author: samuelryzek
 *
 *  Prof Clemens
 *  Chapter 8 Program 5
 *
 * This program takes an input string in lower case letters and
 * returns them as upper case letters.
 */

#include<iostream>
#include<cctype>

using namespace std;

void stringUpperCase(char[]);

int main(){

	char thisString[100];

	cout << "Enter a string of lower-case letters:" << endl;

	cin >> thisString;

	stringUpperCase(thisString);

	return 0;
}

void stringUpperCase(char charArray[]){

	for(int i = 0; i < strlen(charArray); i++){

		charArray[i] = toupper(charArray[i]);

	}

	cout << charArray;
}
