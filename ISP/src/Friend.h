#ifndef FRIEND_H_
#define FRIEND_H_
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"
using namespace std;

class Friend : public Person{
private:
	string address;
public:
	Friend(string name1, string name2,int age, string addressin);
	~Friend();
};


#endif
