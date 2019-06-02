#ifndef WORKP_H_
#define WORKP_H_
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"
using namespace std;

class Workp : public Person{
private:
	string email;
public:
	Workp(string name1, string name2,int age, string emailin);
	~Workp();
};


#endif
