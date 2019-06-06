//============================================================================
// Name        : ISP.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Book.h"
#include "Persons.h"
#include <iostream>
#include <string.h>
#include <fstream>

// fix all your problems using the built in new class button cause c++ is hot garbage

using namespace std;

int main() {
	Book paper("book uno");
	paper.readCSV();
	paper.print();
	return 0;
}
