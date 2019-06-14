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
#include <iostream>
#include <string.h>
#include <fstream>
#include <filesystem>
// fix all your problems using the built in new class button cause c++ is hot garbage
using namespace std;

Book *library[5];
int library_count=1;

void new_book(string name);
void open_book(int selection);
void delete_book(int selection);
void list_books(){
	for(int i =0; i <library_count; i++){
					cout<<i<<": "<<library[i]->bookname<<endl;
				}
}
int main() {
	library[0] = new Book("personal");
	library[1] = new Work("work");
	library_count++;
	while(true){
		int input=0;
		cout<<"welcome to address book++"<<endl;
		if(library_count>0){
			cout<<"here are your books"<<endl;
			list_books();
		}
		else
			cout<< "you have no books to show! its empty in here, just like your heart \n \n"<<endl;
		cout<<"what would you like to do? \n"<<endl;
		cout<<"1. which book would you like to open?"<<endl;
			list_books();
			cout<<"please enter the number of the book you would like to open"<<endl;
			int selecter;
			cin>>selecter;
			open_book(selecter);
	}
	return 0;
}
void new_book(string name){
	library[library_count] = new Book(name);
	library_count++;
}
void open_book(int selection){
	library[selection]->open();
}
void delete_book(int selection){
	for (int i = selection; i < library_count; ++i)
		    library[i] = library[i + 1];
		library_count--;
}
