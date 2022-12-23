/*
 * bookType.cpp
 *
 *  Created on: Apr 27, 2020
 *      Author: samuelryzeks
 */

#include "bookType.h"

//default constructor
bookType::bookType() {
}

//constructor
bookType::bookType(string authors[], string publisher, string bookTitle,
		string ISBN, int publishYear = 0, double priceOfBook = 0.0,
		int numOfBooks = 0, int numOfAuth = 0) {
}

//destructor
bookType::~bookType(){
}

//Prints the books title when called to do so
void bookType::printbookTitle() const{

	cout << "Title: " << bookTitle << endl;
}

//Prints the books title and ISBN when called to do so
void bookType::printbookTitleAndISBN() const{

	cout << "Title: " << bookTitle << ";  ISBN: " << ISBN << endl;

}

//Prints all the info of the book when called to do so
void bookType::printInfo() const{

	cout << bookTitle << endl;
	cout << ISBN << endl;
	cout << publisher << endl;
	cout << publishYear << endl;
	cout << priceOfBook << endl;
	cout << numOfBooks << endl;
	for(int i = 0; i < 4; i++){
		cout << authors[i] << endl;
	}
}

//Part of the search by ISBN. If ISBN matches input
//returns true.
bool bookType::isISBN(string newISBN){

	if(newISBN == ISBN){
		return true;
	} else
		return false;
}

//Part of the search by title. If the title matches input
//returns true.
bool bookType::isTitle(string newTitle){

	if(newTitle == bookTitle){
		return true;
	}else
		return false;
}

//updates the quantity of the book.
int bookType::updateQuantity(int newCount){
		return numOfBooks = newCount;
}

//setter for a book object. Will set all the values of a
//particular book.
void bookType::setBookInfo(string newtitle, string newbookISBN,
		string newbookPublisher, int newpublishedYear, string newauth[],
		double newcost, int newcopies, int newauthorCount){

	bookTitle = newtitle;
	ISBN = newbookISBN;
	publisher = newbookPublisher;
	publishYear = newpublishedYear;
	priceOfBook = newcost;
	numOfBooks = newcopies;
	numOfAuth = newauthorCount;
	for (int i = 0; i < 4; i++){
		authors[i] = newauth[i];
	}

}
