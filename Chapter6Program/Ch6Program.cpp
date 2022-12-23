/*
 * Ch6Program.cpp
 *
 *  Created on: Mar 16, 2020
 *      Author: samuelryzek
 *
 * This program takes in two variables temperature and wind velocity and computes wind chill.
 *
 */


#include<iostream>
#include<cmath>

using namespace std;

//function definition with variables & denotes passing parameter outside of the function
void userInput(int& temp_value, int& velocity_value);
void computation(int temp_value, int velocity_value, int& wind_chill_value);


int main(){

	//variable declaration
	int temp;
	int velocity;
	int wind_chill;

	//instantiates functions inside of main
	userInput(temp, velocity);
	computation(temp, velocity, wind_chill);

	//returns result to user
	cout << "Current temperature: " << temp << "F" << endl;
	cout << "Windchill factor: " << wind_chill << "F" << endl;

	return 0;
}

//actual function, which will pass out of itself values for temp and velocity
void userInput(int& temp_value, int& velocity_value){

	//Gets velocity
	cout << "Enter wind speed in miles per hour: ";
	cin >> velocity_value;
	cout << endl;

	//Gets temperature
	cout << "Enter temperature in degree Fahrenheit: ";
	cin >> temp_value;
	cout << endl;

}

//actual function takes in temp and velocity and returns wind_chill
void computation(int temp_value, int velocity_value, int& wind_chill_value){

	wind_chill_value = 35.74 + 0.6215*temp_value - 35.75*pow(velocity_value, 0.16) + 0.4275*temp_value*pow(velocity_value,0.16);
}

