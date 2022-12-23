/*
 * Ch9Prog.cpp
 *
 *  Created on: Apr 19, 2020
 *      Author: samuelryzek
 *
 *      This program takes in a file of students and test scores. The program then produces letter grades
 *      based on the test scores and outputs the student’s name, test score,
 *      letter grade, top grade achieved, and students that achieved the highest grade. Output is to a *.txt file.
 */

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<array>

using namespace std;

struct student {
	string studentFName;
	string studentLName;
	int testScore;
	char grade;
};

void readStudentData(ifstream& infile, student students[]);
void assignGradeToStudent(ofstream& outfile, student students[]);
int findHighestScore(ofstream& outfile, student students[], int& highestGrade);
void studentWithHighScore(ofstream& outfile, student students[], int highestGrade);

int main(){

	ifstream infile;
	ofstream outfile;

	student students[20];

	int highestGrade = 0;

	readStudentData(infile, students);
	assignGradeToStudent(outfile, students);
	findHighestScore(outfile, students, highestGrade);
    studentWithHighScore(outfile, students, highestGrade);

	infile.close();
	outfile.close();


	return 0;
}

void readStudentData(ifstream& infile, student students[]){

	infile.open("StudentInfo.txt");

	for(int i = 0; i < 20; i++){
	    infile >> students[i].studentLName
			   >> students[i].studentFName
	           >> students[i].testScore;

	}
}

void assignGradeToStudent(ofstream& outfile, student students[]){

	outfile.open("StudentGrades.txt");

	outfile << "Student Name " << setw(25) << "Test Score " << setw(10) << "Grade " << endl;

	for(int i = 0; i < 20; i++){
		if(students[i].testScore >= 90){
			students[i].grade = 'A';
		} else if (students[i].testScore >=80){
			students[i].grade = 'B';
		} else if (students[i].testScore >= 70){
			students[i].grade = 'C';
		} else if (students[i].testScore >= 60){
			students[i].grade = 'D';
		} else
			students[i].grade = 'F';

		 outfile << setw(10) << left << students[i].studentFName << ", ";
		 outfile << setw(20) << left << students[i].studentLName;
		 outfile << setw(12) << left << students[i].testScore;
		 outfile << students[i].grade << endl;
	}
}

int findHighestScore(ofstream& outfile, student students[], int& highestGrade){

	for(int i = 0; i < 20; i++){
		if(students[highestGrade].testScore < students[i].testScore){
			highestGrade = i;
		}
	}
	outfile << endl;
	outfile << "Highest Test Score: " << students[highestGrade].testScore << endl;

	highestGrade = students[highestGrade].testScore;

	return highestGrade;

}

void studentWithHighScore(ofstream& outfile, student students[], int highestGrade){

	outfile << "Students having the highest test score: " << endl;

	for(int i = 0; i <= 20; i++){


		if(students[i].testScore == highestGrade){

			outfile << students[i].studentLName << ", " << students[i].studentFName << endl;
		}

	}

}







