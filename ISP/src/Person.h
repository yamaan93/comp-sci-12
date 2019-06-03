#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Person{

public:
	Person(string name1, string name2, int age);
	string first_name,last_name;
	void print(){
		cout<<"your mom"<<endl;
	}
	int age;
	int type;
	~Person();

};
#endif


