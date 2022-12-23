/*
 * Ch2Hw2.cpp
 *
 *  Created on: Feb 8, 2020
 *      Author: samuelryzek
 */

#include <iostream>
#include <string>
using namespace std;

const double CONVERSION = 3.5;

int main()
{
	const int TEMP = 23;
    string name;
    int id;
    int num;
    double decNum;
    double mysteryNum;

    cout << "Enter last name: ";
    cin >> name;
    cout << endl;
    cout << "Enter a two digit integer: ";
    cin >> id;
    cout << endl;
    num = (id * TEMP) % (static_cast<int>(CONVERSION));
    cout << "Enter a decimal number: ";
    cin >> decNum;
    cout << endl;
    mysteryNum = decNum / CONVERSION - TEMP;
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Mystery number: "<< mysteryNum << endl;
    return 0;
}
