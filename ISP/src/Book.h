#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"
using namespace std;
class Book{
private:
	int people_count;

public:
	int type;
	string bookname;
	Book();
	Book(string bookin);
	Book(string bookin,int typein);
	void saveCSV(Person* save);
	void readCSV();
	//Person array[100];
	friend Book operator +(const Book &a, const Book &b);
	friend Book operator <<(const Book &a,const Book &b);
	void addPerson(Person a);
	~Book();
};
#endif
