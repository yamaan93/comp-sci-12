//============================================================================
// Name        : ISP.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Book.h"
#include "Persons.h"
#include <iostream>
#include <string.h>
#include <fstream>

// fix all your problems using the built in new class button cause c++ is hot garbage

using namespace std;
Book *library[5];
int library_count=0;

void new_book(string name);
void open_book(int selection);
void delete_book(int selection);
void list_books(){
	for(int i =0; i <library_count; i++){
					cout<<i<<": "<<library[i]->bookname<<endl;
				}
}
int main() {
	library[0] = new Book("big");
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
		cout<<"1. create new book \n 2. open book \n 3. delete book \n 4. merge books \n"<<endl;
		cin>>input;
		if (input == 1){
			cout<<" please name the new book: "<<endl;
			string name = "";
			cin>>name;
			new_book(name);
		}
		if(input== 2){
			list_books();
			cout<<"please enter the number of the book you would like to open"<<endl;
			int selecter= 10000;
			cin>>selecter;
			open_book(selecter);
		}
		if(input == 3){
			list_books();
			cout<<"please enter the number of the book you would like to delete"<<endl;
			int selecter= 10000;
			cin>>selecter;
			delete_book(selecter);
		}
		if(input ==4){
			// put the dumb book + book;
		}
		else{
					cout<<"incorrect command"<<endl;

		}
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
