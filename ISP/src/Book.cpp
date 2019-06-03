/*
 * Book.cpp
 *
 *  Created on: Jun. 3, 2019
 *      Author: Yamaan
 */

#include "Book.h"

void Book::addPerson(string name1, string name2,int age1){
	array[people_count].first_name=name1;
	array[people_count].last_name = name2;
	array[people_count].age = age1;
	cout<<array[people_count].first_name<<" your gay"<<endl;
	}


Book::~Book() {
	// TODO Auto-generated destructor stub
}

