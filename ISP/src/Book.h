/*
 * Book.h
 *
 *  Created on: Jun. 3, 2019
 *      Author: Yamaan
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include "Persons.h"
using namespace std;
class Book {
private:
	int people_count;

public:
	int type;
	string bookname;
	void print();
	Book(string bookin){
		bookname = bookin;
		type = 0;
		people_count = 0;
		cout<<"c++ sucks"<<endl;
	}
	Book(string bookin,int typein){
		bookname = bookin;
		type = typein;
		people_count = 0;
		cout<<"c++ sucks"<<endl;
	}
	void saveCSV();
	void readCSV();
	Persons array[100];
	friend Book operator +(const Book &a, const Book &b);
	friend Book operator <<(const Book &a,const Book &b);
	void addPerson(string name1, string name2,int age1);

	virtual ~Book();
};

#endif /* BOOK_H_ */
