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
void Book::print(){
	for(int i = 0; i<2;i++){
		cout<<i<<endl;
		cout<<array[i].first_name<<" "<<array[i].last_name<<" "<<array[i].age<<endl;
	}
}
void Book::addPerson(string name1, string name2, int age1) {
	array[people_count].first_name = name1;
	array[people_count].last_name = name2;
	array[people_count].age = age1;
	people_count++;
}
void Book::saveCSV() {
	string savename = bookname + ".csv";
	ofstream myfile;
	myfile.open(savename);
	for(int i=0;i<people_count+1;i++){
	myfile << array[i].first_name << "," << array[i].last_name << ","
			<< array[i].age << endl;
	}
	myfile.close();
}
void Book::readCSV() {
	string input;
	string line;
	ifstream myfile;
	int count=0;
	int tick=0;
	string savename = bookname + ".csv";
	myfile.open(savename);
	for(int i = 0;myfile.good(); i++){

	getline(myfile, line, ',');
	//cout<<tick<<count<<line<<endl;
	if(tick==0){
		array[count].first_name= line;
	}
	if(tick==1){
		array[count].last_name= line;
	}
	if(tick==2){
			array[count].age= stoi(line);
		}
	}
	myfile.close();
	for(int i=0; i <3; i++){

	}
}
Book::~Book() {
	// TODO Auto-generated destructor stub
}

