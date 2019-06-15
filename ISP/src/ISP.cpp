//============================================================================
// Name        : ISP.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Book.h"
#include "Persons.h"
#include "Work.h"
#include "Familly.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <filesystem>
// fix all your problems using the built in new class button cause c++ is hot garbage
using namespace std;

Book *library[5];



void open_book(int selection);
void list_books(){
	for(int i =0; i <3; i++){
		cout<<i<<": "<<library[i]->bookname<<endl;
	}
}
int main() {
	library[0] = new Book("personal");
	library[1] = new Work("work");
	library[2] = new Familly("familly");
//setting up books
	for(int i =0; i<3;i++){
		library[i]->readCSV();
	}
	while(true){
		//select the book you wanna open
		cout<<"welcome to address book++"<<endl;
		cout<<"here are your books"<<endl;
		cout<<"what would you like to do? \n"<<endl;
		cout<<"1. which book would you like to open?"<<endl;
			list_books();
			cout<<"please enter the number of the book you would like to open"<<endl;
			int selecter;
			cin>>selecter;
			open_book(selecter);//open book function call
	}
	return 0;
}

void open_book(int selection){
	library[selection]->open();
}

