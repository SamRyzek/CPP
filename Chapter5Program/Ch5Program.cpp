/*
 * Ch5Program.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: samuelryzek
 */


#include<iostream>
#include<iomanip>

using namespace std;

int main(){

	//declare variables
	int num1;
	int num2;
	int sqrOddNum;
	int sumSqrOddNum = 0;
	int evenNum;
	int sumEvenNum = 0;
	int intNum = 1;
	int sqrIntNum;
	int placeHolder;
	int asciiChar = 65;

	//get user input
	cout << "Enter two numbers." << endl;
	cout << "First number must be less than the second number you enter " << endl;
	cout << "Enter numbers: ";
	cin >> num1 >> num2;

	//num1 will be incrementing, therefore we need a place holder to store the value of num1
	placeHolder = num1;
	cout << endl;
	cout << "Odd integers between " << placeHolder << " and " << num2 << " are:" << endl;

	//this while loop does three things, it determines if an integer is odd or even.
	//if the number is odd, it squares it and then stores it so it can be summed up. It also prints the odd number.
	//if the number is even it stores the number and then sums it up.
	while (num1 <= num2){

		if(num1%2 != 0){
			cout << num1 << " ";
			sqrOddNum = num1 * num1;
			sumSqrOddNum += sqrOddNum;
		} else {
			evenNum = num1;
			sumEvenNum += evenNum;
		}

	num1++;
	}
	cout << endl;
	cout << "Sum of even integers between " << placeHolder << " and " << num2 << " = " << sumEvenNum << endl;

	//here we take a number that has been initialized at one and then use a while loop
	//to increment the number, square it, and then report the results in a readable format
	cout << "Number     Square of Number" << endl;

	while(intNum <= 10){
		sqrIntNum = intNum * intNum;
		cout << setw(3) << intNum << setw(20) << sqrIntNum << endl;
		intNum++;
	}
	cout << endl;

	//here we use the results of the first while loop to provide the user with the square of the odd numbers
	//identified in the first while loop.
	cout << "Sum of the square of odd integers between " << placeHolder << " and " << num2 << " = " << sumSqrOddNum << endl;

	//for the last while loop it was determined that capital A was the ASCII number 65. We then use that as our base number,
	//so we initialized the variable asciiChar to 65, we then use a while loop to increment to the ASCII number for Z which
	//is 90. We then print the formatted results to the user.
	cout << "Upper case letters are: ";
	while (asciiChar <= 90){

		cout << char(asciiChar) << " ";
		asciiChar++;
	}

	return 0;
}

