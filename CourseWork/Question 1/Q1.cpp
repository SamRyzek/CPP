/*
 * Q1.cpp
 *
 *  Created on: Feb 8, 2020
 *      Author: samuelryzek
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	void defaultParam(int num1, int num2 = 7, double z = 2.5);

	defaultParam(1, 2, 3.0);

	return 0;
}

void defaultParam(int num1, int num2 = 7, double z = 2.5)
{
	int num3;
	num1 = num1 + static_cast<int>(z);
	z = num2 + num1 * z;
	num3 = num2 - num1;
	cout << "num3 = " << num3 << endl;
}

