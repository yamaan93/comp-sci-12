#include "Person.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include "Person.h"

Person::Person(string name1, string name2, int age1){
	first_name =name1;
	last_name = name2;
	age = age1;
	type = 0;
}
