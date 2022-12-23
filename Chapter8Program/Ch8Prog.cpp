/*
 * Ch8Prog.cpp
 *
 *  Created on: Apr 9, 2020
 *      Author: samuelryzek
 *
 *  This program takes in 5 candidates and the number of votes that each candidate received and
 *  provides the user with a listing of the candidates, a report back of the number of votes,
 *  and then provides the percentage of votes. The program then
 *  provides the total number of votes cast, and determines the winner of the election.
 */

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


//function prototypes
void sendResult(string[], int[], double[]);
void determineWinner(string[], int[], int);
void determineAvg(int[], double[], int);

int main(){

	//variable declaration
	string name[5];
	int votes[5];
	double avg[5];
	int sum = 0;

	cout << "Enter the candidate's name and the votes received by the candidate. " << endl;

	//Two arrays, one for the name of the candidate and one for the number of votes
	for(int i = 0; i <= 4; i++){

		cin >> name[i];
		cin >> votes[i];
	}

	//Get the sum of the votes
	for (int i = 0; i <= 4; i++){

	    sum+=votes[i];
	}

	//function calls
	determineAvg(votes, avg, sum);
	sendResult(name, votes, avg);
	determineWinner(name, votes, sum);

	return 0;
}

//Functions
void sendResult (string name[], int votes[], double avg[]){

		//provides feedback for the candidate entries to the user properly formatted
	    cout << "Candidate";
		cout << right << setw(5) << " " << setw(5) << "Votes Received";
		cout << right << setw(5) << " " << setw(5) << "% of Total Votes" << endl;

		for(int i = 0; i <= 4; i++){

		   cout << setprecision(2) << fixed;
		   cout << left << setw(10)<< name[i] << setw(3) << right << " ";
		   cout	<< setw(9) << right << votes[i];
		   cout << setw(20) << avg[i]*100;
		   cout << endl;

		}
}

void determineWinner(string name[], int votes[], int sum){

		//logic to determine who the winner is
		int high = votes[0];
		string winner = name[0];
		for (int i = 1; i < 5; i++){

			if (votes[i] > high){

				high = votes[i];
				winner = name[i];
			}
		}

		//reports results of the election to the user
		cout << endl;
		cout << "Total " << setw(15) << sum << endl;
		cout << "The winner of the election is " << winner;
}

void determineAvg(int votes[], double avg[], int sum){

	//determines the average for each entry against the sum of the votes
	for (int i = 0; i <= 4; i++){

			avg[i] = ((double)votes[i]) / ((double)sum);

		}
}



