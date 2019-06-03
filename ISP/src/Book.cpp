#include "Book.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"
using namespace std;

Book::Book(string bookin){
	bookname = bookin;
}
Book::Book(string bookin, int typein){
	bookname = bookin;
	type = typein;
}

void Book::saveCSV(Person* save){
	string savename = bookname + ".csv";
	ofstream myfile;
		myfile.open(bookname);
		for(int i = 0; i<people_count; i++){
			myfile<<save[i].first_name<<","<<save[i].last_name<<","<<save[i].age<<","<<endl;;
		}
		myfile.close();
}
void Book::readCSV(){
	string savename = bookname + ".csv";
	string input;
	string line;
	ifstream myfile;
	myfile.open(savename);
	for(int i = 0;myfile.good(); i++){
	getline(myfile, line, ',');
	input = input + line[0];
	}
	for(int i = 0; i <input.length();i++){
		cout<<input[i]<<endl;
	}
	myfile.close();
}

