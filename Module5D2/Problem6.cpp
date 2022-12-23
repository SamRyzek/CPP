/*
 * Problem6.cpp
 *
 *  Created on: May 3, 2020
 *      Author: samuelryzek
 */

//To make this work, it must have an input file

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct letters{
	double upper;
	double lower;
	double total;
	double percentUpper;
	double percentLower;
};

void openFile(ifstream& infile, char input[]);
void count(char input[], letters newLetters[]);
void printResult(letters newLetters[]);


int main(){

	ifstream infile;
	char input[100];

	letters newLetters[100];

	openFile(infile, input);
	count(input, newLetters);
	printResult(newLetters);


	infile.close();

	return 0;
}
void openFile(ifstream& infile, char input[]){


	infile.open("inputfile.txt");

	if(!infile){
		cout << "Cannot open Input File" << endl;
		cout << "Exit Program" << endl;
	}

	for(int i = 0; i < 100; i++){

		infile >> input[i];
	}
}
void count(char infile[], letters newLetters[]){

		double upper=0.0, lower=0.0;

		for(int i = 0; i < 100; i++){

			if (infile[i] >= 'A' && infile[i] <= 'Z'){
				upper += 1;
			}

			if (infile[i] >= 'a' && infile[i] <= 'z'){
				lower += 1;
			}

		}
		newLetters->upper = upper;
		newLetters->lower = lower;
		newLetters->total = newLetters->lower + newLetters->upper;

		newLetters->percentUpper = newLetters->upper/newLetters->total * 100;
		newLetters->percentLower = newLetters->lower/newLetters->total * 100;

}

void printResult(letters newLetters[]){

	cout << setprecision(0) << fixed;
	cout << "The total number of letters is " << newLetters->total << endl;
	cout << "The number of Capital Letters is " << newLetters->upper << endl;
	cout << "The total percentage of Capital Letter is " << newLetters->percentUpper
			<< "%" << endl;
	cout << "The total number of lower-case letters is " << newLetters->lower << endl;
	cout << "The percentage of lower-case letters is " << newLetters->percentLower
			<< "%" << endl;


}
