#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class Person{
private:


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
