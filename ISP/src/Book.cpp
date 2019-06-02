#include "Book.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"

void Book::saveCSV(Person* save){
	string savename = bookname + ".csv";
	ofstream myfile;
		myfile.open(bookname);
		for(int i = 0; i<people_count; i++){
			myfile<<save[i].first_name<<","<<save[i].last_name<<","<<save[i].age<<",";
		}
		myfile.close();
}
