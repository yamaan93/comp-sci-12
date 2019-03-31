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
	char last_name[10];
	int mark;
	int age;
};

person *list = new person[30]; // 30 students to match the new doug ford education plan

int run = 1; // to kill the program later
int student_count = 0;

void add();
void list_items();
int main()
{
	int user_choice = 0;
	 while(run ==1){
		 cout<<" \n Welcome to mark book 2.0"<<endl;
		 printf("what would you like \n  1.list \n 2. add  \n 3. delete \n 4.edit \n");
		 cin>>user_choice;
		 if(user_choice == 1){
			list_items();

		 }
		 if(user_choice == 2){
				add();
				student_count++;
		 }
		 if(user_choice == 3){
			 // delete student
		 }
		 if(user_choice == 4){
			 // edit student
		 }
	 }
}
void add(){
	char name1[10];
	char name2[10];
	int grade;
	int oldness;
	//**************************************
	printf("\n enter a first name \n");
	cin>>name1;
	strncpy(list[student_count].first_name, name1,9);
	list[student_count].first_name[9] = 0;
	//**************************************
	printf("\n enter last name \n");
	cin>>name2;
	strncpy(list[student_count].last_name, name2,9);
	list[student_count].last_name[9] = 0;
	//***************************************
	printf("\n enter their mark \n");
	cin>>grade;
	list[student_count].mark = grade;
	//***************************************
	printf("\n enter their age \n");
	cin>>oldness;
	list[student_count].age = oldness;
}
void list_items(){
	 for(int i = 0; i<student_count; i++){
		 printf("\n First name: %s",list[i].first_name);
		 printf("\n Last name: %s",list[i].last_name);
		 printf("\n Mark: %d",list[i].mark);
		 printf("\n age: %d",list[i].age);
	 }

}
