#ifndef WORKBOOK_H_
#define WORKBOOK_H_
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"
#include "Book.h"
using namespace std;

class Workbook : public Book{
public:
	bool is_person_of_type();
};

#endif
