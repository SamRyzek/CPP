/*
 * Ch7Program.cpp
 *
 *  Created on: Mar 31, 2020
 *      Author: samuelryzek
 *
 *  This program takes 4 inputs from the user and reformats Social Security Number and
 *  Password so that they are hidden from the user.
 */

#include <iostream>
#include <string>

using namespace std;

int main(){

	//variable declaration
	string name;
	string socialSecurityNum;
	string userID;
	string password;

	//ask user for input
	cout << "Enter a student's name, social security number, user ID, and password in one line: " << endl;

	//user getline to get user input
	getline(cin, name, ',');
	getline(cin, socialSecurityNum, ',');
	getline(cin, userID, ',');
	getline(cin, password);

	//reformat password
	password.replace(password.begin(), password.end(), "xxxxxxxx");

	//break apart ssn into three parts
	string ssnFirstPart = socialSecurityNum.substr(1, 3);
	string ssnSecondPart = socialSecurityNum.substr(5, 2);
	string ssnThirdPart = socialSecurityNum.substr(8, 4);

	char dash = '-';

	//replace each part of ssn with reformatted output
	ssnFirstPart.replace(ssnFirstPart.begin(), ssnFirstPart.end(), "xxx");
	ssnSecondPart.replace(ssnSecondPart.begin(), ssnSecondPart.end(), "xx");
	ssnThirdPart.replace(ssnThirdPart.begin(), ssnThirdPart.end(), "xxxx");

	//return output to user
	cout << " " << endl;
	cout << name << " " << ssnFirstPart << dash << ssnSecondPart << dash << ssnThirdPart << " " << userID << " " << password;


	return 0;
}
