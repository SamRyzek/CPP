/*
 * Ch3.cpp
 *
 *  Created on: Feb 17, 2020
 *      Author: samuelryzek
 *
 *  This program takes in a file of the total number of tickets sold to a sporting event and
 *  the amount of each ticket and returns to the user the total revenue and total number of
 *  tickets sold in an output file.
 *
 */

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main () {


	ifstream infile;
	ofstream outfile;

	int box;
	int sideline;
	int premium;
	int general;

	int box_price;
	int sideline_price;
	int premium_price;
	int general_price;

	int total_tickets;
	int total_price;


	infile.open("TicketsSold.txt");
	outfile.open("Total_Ticket_Revenue_Out.txt");

	infile >> box_price >> box;
	infile >> sideline_price >> sideline;
	infile >> premium_price >> premium;
	infile >> general_price >> general;


	total_tickets = box + sideline + premium + general;
	total_price = (box_price*box) + (sideline_price*sideline) + (premium_price*premium) + (general_price*general);

	outfile << fixed << showpoint;
	outfile << setprecision(2);

	cout << "Processing Data" << endl;
	cout << "See output file: Total_Ticket_Revenue_Out.txt for the results." << endl;

	outfile << "Number of Tickets Sold = " << total_tickets << endl;
	outfile << "Sale Amount = " << setfill(' ') << right << "$" << total_price/1.00;


	infile.close();
	outfile.close();

	return 0;
}
