//============================================================================
// Name        : ISP.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <fstream>
#include "Book.h"
#include "Person.h"
using namespace std;

int main() {
	Person yamaan("yamaan", "bakir", 16);
	yamaan.print();
	string name = "your";
	//Book yeet(name);
	return 0;
}
