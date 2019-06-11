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
//construtors
Book::Book(string bookin){
	bookname = bookin;
	type = 0;
	people_count = 0;
	cout<<"c++ sucks"<<endl;
}
Book::Book(string bookin,int typein){
	bookname = bookin;
	type = typein;
	people_count = 0;
	cout<<"c++ sucks"<<endl;
}
//*****************************************************


void Book::print(){
	cout<<"person count: "<<people_count<<endl;
	for(int i = 0; i<people_count;i++){
		cout<<i<<": ";
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
	cout<<"i made it mom"<<endl;
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
	int count=0;
	int tick=0;
	string savename = bookname + ".csv";
	myfile.open(savename);
	for(int i = 0;myfile.good(); i++){
		if (tick == 3){
			people_count++;
			count++;
			tick =0;

		}
	if(tick<2){
	getline(myfile, line, ',');}
	else{
		getline(myfile, line);
	}
	//cout<<tick<<count<<line<<endl;
	if(tick==0){
		array[count].first_name= line;
		//cout<<line<<endl;
	}
	if(tick==1){
		array[count].last_name= line;
		//cout<<line<<endl;
	}
	if(tick==2){
		array[count].age= stoi(line);
		//cout<<line<<endl;
		}
	tick++;
	}

	myfile.close();
	for(int i=0; i <3; i++){

	}
}
void Book::delete_person(int person){
	for (int i = person; i < people_count; ++i)
	    array[i] = array[i + 1];
	people_count--;
}
Book::~Book() {
	// TODO Auto-generated destructor stub
}

