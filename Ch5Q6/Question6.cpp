/*
 * Question6.cpp
 *
 *  Created on: Mar 23, 2020
 *      Author: samuelryzek
 */

#include<iostream>

using namespace std;

int main(){

	//variable declaration
	int number;
	//We are going to use a boolean to assist in report results to the user.
	//Without a boolean, the results would print for each iteration of the loop
	bool primeNum = true;

	//Get a positive integer from the user
	cout << "Please enter a positive integer: " << endl;
	cin >> number;

	//This condition ensures that the user is inputting a valid, positive integer.
	while(number <= 0){
		cout << "You must enter a positive integer please try again: " << endl;
		cin >> number;
	}

	//Here we do the heavy lifting and determine if the number is a prime or not
	if(number > 0) {
		//We begin our incrementing at 1, if we begin at zero the loop never gets started
		//due to the condition 0 = 0. We can divide by two and can eliminate
		//the upper half of the resultant devision, thus the number/2. For instance:
		//If we take the number 4 and divide by 2 we will only have to deal with
		//1 and 2 in order to determine if the number is prime or not. This holds true for
		//all numbers. We enter the if statement
		//and if there is no remainder then we know the number is not a prime.
		for (int i = 1; i <= number/2; i++){
			if (number % i == 0){
				//if number is not prime our boolean is false
				primeNum = false;
			}
		}
		//Return results to the user.
		if (primeNum){
			cout << "The number you selected is prime! " << endl;
		} else {
			cout << "The number you selected is not prime! " << endl;
		}
	}
	return 0;
}

