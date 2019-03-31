//============================================================================
// Name        : binary.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;
#define FILENAME "C:\\Users\\Yamaan\\Documents\\binaryfile.txt"

int main() {
	FILE *fptr;
 if((fptr = fopen(FILENAME,"rb"))==NULL){
	 printf("Error opening file\n");
	 return 0;
 }
 struct your_mum{
	 char name[10];
	 int age;
 };
 your_mum p;

 if((fread(&p, sizeof(p), 1, fptr) != 1) && !feof(fptr)){
	 printf("error writting file ");
	 return 0;
 }
 cout<<p.age<<endl;
}
