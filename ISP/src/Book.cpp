#include "Book.h"
#include <iostream>
#include <string.h>
#include <fstream>

void Book::saveCSV(string save){
	ofstream myfile;
		myfile.open("test.csv");
		for(int i = 0; i<save.length(); i++){
			myfile<<save[i]<<",";
		}
		myfile.close();
}
