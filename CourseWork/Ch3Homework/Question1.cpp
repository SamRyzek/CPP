 /*
 * Question1.cpp
 *
 *  Created on: Feb 21, 2020
 *      Author: samuelryzek
 */


#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{

	int i, j;

	for (i = 1; i <= 9; i++)
	{
	for (j = 1; j <= (9 - i); j++)
	cout << " ";
	for (j = 1; j <= i; j++)
	cout << setw(1) << j;
	for (j = (i - 1); j >= 1; j--)
	cout << setw(1) << j;
	cout << endl;
	}


	return 0;

}

