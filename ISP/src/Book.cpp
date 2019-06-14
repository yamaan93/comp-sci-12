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
		cout<<line<<endl;
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
void  Book::open(){
	readCSV();
	print();
	cout<<"\n 1. add person \n 2. delete person \n 3. edit person"<<endl;
	int input;
	cin>>input;
	if(input== 1){
		string first;
		string last;
		int age;
		cout<<"enter first name:  ";
		cin>>first;
		cout<<endl;
		cout<<"enter last name:  ";
		cin>>last;
		cout<<endl;
		cout<<"enter age:  ";
		cin>>age;
		cout<<endl;
		addPerson(first,last,age);
		}
		if(input ==2){
		int selection;
		cout<<"enter the number of the person you want to delete:  ";
		cin>>selection;
		delete_person(selection);
		}
		if(input ==3){
			cout<<"enter the number of the person you wanna edit";
			int selection;
			cin>>selection;
			cout<<endl;
			cout<<"what do you wanna change? \n 1. first name \n 2. last name \n 3. age"<<endl;
			int inp;
			cin>>inp;
			if(inp ==1){
				cout<<"enter new name:  ";
				string newname;
				cin>>newname;
				array[selection].first_name = newname;
			}
			if(inp ==2){
				cout<<"enter new name:  ";
				string newname;
				cin>>newname;
				array[selection].last_name = newname;
			}
			if(inp ==3){
				cout<<"enter new name:  ";
				int newage;
				cin>>newage;
				array[selection].age = newage;
			}

		}
		else{
			cout<<"incorrect command"<<endl;
		}
		saveCSV();

}
Book::~Book() {
	// TODO Auto-generated destructor stub
}

