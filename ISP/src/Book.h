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
	Book();
	Book(string type);
	void saveCSV(Person* save);
	Person readCSV();
	Person array[];
	friend Book operator +(const Book &a, const Book &b);
	friend Book operator <<();

};
#endif
