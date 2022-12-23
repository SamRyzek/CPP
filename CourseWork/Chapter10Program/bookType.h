/*
 * bookType.h
 *
 *  Created on: Apr 27, 2020
 *      Author: samuelryzek
 */

#ifndef BOOKTYPE_H_
#define BOOKTYPE_H_

#include<iostream>
#include<string>

using namespace std;

class bookType {


//private class variable declaration
private:
	string authors[4];
	string publisher;
	string bookTitle;
	string ISBN;
	int publishYear;
	int numOfBooks;
	int numOfAuth;
	double priceOfBook;

//public method calls
public:
	bookType();
	bookType(string authors[], string publisher, string bookTitle,
			string ISBN, int publishYear, double priceOfBook,
			int numOfBooks, int numOfAuth);
	~bookType();

	void printbookTitle() const;
	void printbookTitleAndISBN() const;
	bool isISBN(string ISBN);
	bool isTitle(string Title);
	int updateQuantity(int counts);
	void setBookInfo(string title, string bookISBN,
			string bookPublisher, int publishedYear, string auth[],
			double cost, int copies, int authorCoun);
	void printInfo() const;

};

#endif /* BOOKTYPE_H_ */
