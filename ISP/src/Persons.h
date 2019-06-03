/*
 * Persons.h
 *
 *  Created on: Jun 3, 2019
 *      Author: Yamaan
 */

#ifndef PERSONS_H_
#define PERSONS_H_
#include<iostream>
#include<string.h>
using namespace std;
class Persons {
public:
	string first_name;
	string last_name;
	int age;
	Persons(string name1, string name2, int age);
	Persons(){

	}
	virtual ~Persons();
};

#endif /* PERSONS_H_ */
