/*
 * Ch4.cpp
 *
 *  Created on: Feb 25, 2020
 *      Author: samuelryzek
 *
 *   This program takes a user input of the number of cookies and computes the number of
 *   boxes of cookies and the containers of cookies.
 *
 */

#include<iostream>

using namespace std;

int main() {

	//Variables
	int cookies;
	int box_of_cookies;
	int container_of_boxes;
	int cookies_remaining;
	int boxes_remaining;

	//Get number of cookies
	cout << "Please enter the number of cookies: " << endl;
	cin >> cookies;

	//Determine the number of boxes and number of cookies remaining
	box_of_cookies = cookies / 24;
	cout << "The number of cookie boxes needed the hold the cookies is: " << box_of_cookies << endl;
	cookies_remaining = cookies % 24;

	//If no cookies remain report it, otherwise report number of remaining cookies
	if (cookies_remaining == 0){

		cout << "There are no cookies remaining. " << endl;

	} else {

		cout << "Leftover cookies: " << cookies_remaining << endl;
	}

	//Determine the number of containers and number of boxes remaining
	container_of_boxes = box_of_cookies / 75;
	cout << "The number of containers needed to store the cookie boxes is: " << container_of_boxes << endl;
	boxes_remaining = box_of_cookies % 75;

	//If no boxes remain report it, otherwise report the number of remaining boxes.
	if (boxes_remaining == 0){

		cout << "There are no boxes of cookies remaining. " << endl;

	} else {

		cout << "Leftover boxes: " << boxes_remaining << endl;
	}


	return 0;
}

