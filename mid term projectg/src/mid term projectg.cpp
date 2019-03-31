//============================================================================
// Name        : mid.cpp
// Author      : Yamaan Bakir
// Version     :
// Copyright   : dont copy plz
// Description : Mark book program for mid term project
//============================================================================

#include <iostream>
using namespace std;
#include <string.h>
//struct for each person in the address book
struct person{
	char first_name[10]; // if your first name is longer than 10 letters, too bad
};

person *list = new person[30]; // 30 students to match the new doug ford education plan

int run = 1;
int main()
{
	int user_choice = 0;
	 while(run ==1){
		 cout<<" \n Welcome to mark book 2.0"<<endl;
		 printf("what would you like \n  1.list \n 2. add  \n 3. delete \n 4.edit");
		 cin>>user_choice;
		 if(user_choice == 1){
			 // list students
		 }
		 if(user_choice == 2){
			 // add student
		 }
		 if(user_choice == 3){
			 // delete student
		 }
		 if(user_choice == 4){
			 // edit student
		 }
	 }
}
