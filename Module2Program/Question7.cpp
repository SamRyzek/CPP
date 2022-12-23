/*
 * Question7.cpp
 *
 *  Created on: Feb 26, 2020
 *      Author: samuelryzek
 *
 *  This program uses the quadratic formula to calculate the roots of a polynomial.
 *  It also identifies what types of roots the are (e.g. real, complex)
 */

#include<iostream>
#include<cmath>

using namespace std;

int main() {

	//Variables
	int a;
	int b;
	int c;
	double root_one;
	double root_two;
	int discriminant;

	//Get coefficient values
	cout << "Please enter a value for a, b, and c";
	cin >> a >> b >> c;

	if (a == 0){

		cout << "a cannot equal zero, please enter a valid entry.";
	}

	else {
		//Calculate discriminant
		discriminant = pow(b,2) - 4*a*c;


		//Calculate Roots
		root_one = (-b + sqrt(discriminant))/(2*a);
		root_two = (-b - sqrt(discriminant))/(2*a);

		//Provide feedback to user
		if (discriminant == 0){

			cout << "The equation has a single real root and the root is: " << root_one;

		} else if(discriminant > 0) {

			cout << "The equation has two real roots and they are: " << root_one << " and " << root_two;

		} else {

			cout << "The equation has two complex roots.";

		}
	}
	return 0;
}

