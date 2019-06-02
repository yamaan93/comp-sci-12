#include "Book.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"

void Book::saveCSV(Person* save){
	ofstream myfile;
		myfile.open("test.csv");
		for(int i = 0; i<people_count; i++){
			myfile<<save[i].first_name<<",";
		}
		myfile.close();
}
