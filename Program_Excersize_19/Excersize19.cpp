/*
 * Excersise19.cpp
 *
 *  Created on: Jan 31, 2020
 *      Author: samuelryzek
 */

#include<iostream>

using namespace std;

int main()
{
	//Variable declaration

	int nickels;
	int quarters;
	int dimes;
	int q_pennies;
	int d_pennies;
	int n_pennies;
	int total_pennies;

	//Ask the user to enter the number of quarters, dimes, and nickels

	cout << "Please enter the number of quarters: " << endl;
	cin >> quarters;

	cout << "Please enter the number of dimes: " << endl;
	cin >> dimes;

	cout << "Please enter the number of nickels: " << endl;
	cin >> nickels;

	//Convert number of quarters to pennies
	q_pennies = quarters * 25;

	//Convert number of dimes to pennies
	d_pennies = dimes * 10;

	//Convert number of nickels to pennies
	n_pennies = nickels * 5;

	//Find the total number of pennies
	total_pennies = q_pennies + d_pennies + n_pennies;


	//Return the result to the user
	cout << "The total number of pennies is: " << total_pennies << endl;

	return 0;
}
