/*
 * C2P2.cpp
 *
 *  Created on: Feb 5, 2020
 *      Author: samuelryzek
 *
 *  This program takes the size of a fuel tank in gallons and
 *  the miles per gallons of the vehicle and computes the
 *  distance the vehicle can go before refueling.
 *
 */

#include<iostream>

using namespace std;

int main(){

	//Variable Declaration
	int fuel_tank_size;
	double mpg;
	double distance_can_go;

	//Getting user input
	cout << "Please enter the size of your fuel tank in gallons. " << endl;
	cin >> fuel_tank_size;

	cout << "What is the miles per gallon of your vehicle? " << endl;
	cin >> mpg;

	//Here is the equation to determine the distance the vehicle can
	//go on one tank of gas.
	distance_can_go = fuel_tank_size * mpg;

	//Return result of equation to the user.
	cout << "Your vehicle can go " << static_cast<int>(distance_can_go) << " miles without refueling" << endl;

	return 0;

}

