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
	Book(string bookin,);
	Book(string type);
	void saveCSV(Person* save);
	Person readCSV();
	Person array[];
	friend Book operator +(const Book &a, const Book &b);
	friend Book operator <<(const Book &a,const Book &b);
	~Book();
};
#endif
