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
Book library[5];
int library_count=0;
int main() {

	while(true){
		cout<<"welcome to address book++"<<endl;
		if(library_count>0){
			cout<<"here are your books"<<endl;
			for(int i =0; i <library_count; i++){
				cout<<i<<": "<<library[i].bookname<<endl;
			}
		}
		cout<<"what would you like to do? /n"<<endl;
	}
	return 0;
}
