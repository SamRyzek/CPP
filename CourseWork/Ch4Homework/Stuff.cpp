/*
 * Stuff.cpp
 *
 *  Created on: Feb 28, 2020
 *      Author: samuelryzek
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int beta = 3;

	switch (beta % 8)
	{
	case 0:
	case 1:
	beta = beta + beta;
	break;
	case 2:
	beta--;
	break;
	case 3:
	case 7:
	beta = static_cast<int>(sqrt(beta * 1.0));
	beta = beta / 3;
	break;
	case 4:
	beta = beta * beta;
	case 5:
	case 6:
	beta = 11 - beta;
	break;
	default:
	beta = -5;
	}
	cout << beta << endl;


return 0;
}
