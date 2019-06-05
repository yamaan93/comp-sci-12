/*
 * Book.cpp
 *
 *  Created on: Jun. 3, 2019
 *      Author: Yamaan
 */

#include "Book.h"
#include <iostream>
#include <string.h>
#include <fstream>

void Book::addPerson(string name1, string name2, int age1) {
	array[people_count].first_name = name1;
	array[people_count].last_name = name2;
	array[people_count].age = age1;
	cout << array[people_count].first_name << " your gay" << endl;
	people_count++;
}
void Book::saveCSV() {
	string savename = bookname + ".csv";
	ofstream myfile;
	myfile.open(savename);
	for(int i=0;i<people_count;i++){
	myfile << array[i].first_name << "," << array[i].last_name << ","
			<< array[i].age << endl;
	}
	myfile.close();
}
void Book::readCSV() {
	string input;
	string line;
	ifstream myfile;
	string savename = bookname + ".csv";
	myfile.open(savename);
	for(int i = 0;myfile.good(); i++){
	getline(myfile, line, ',');
	input = input + line;
	}
	myfile.close();
	cout<<input<<endl;
}
Book::~Book() {
	// TODO Auto-generated destructor stub
}

