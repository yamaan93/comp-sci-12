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
	char first_name[20]; // if your first name is longer than 20 letters, get a new one
	char last_name[20];
	int mark;
	int age;
	int likability;
};

person *list = new person[30]; // 30 students to match the new doug ford education plan

int run = 1; // to kill the program later
int student_count = 0;

void add();
void delete_list();
void list_items(int full);
void edit();
int main()
{
	int user_choice = 0;
	 while(run ==1){
		 cout<<" \n Welcome to mark book 2.0"<<endl;
		 printf("what would you like \n  1.list \n 2. add  \n 3. delete \n 4.edit \n");
		 cin>>user_choice;
		 if(user_choice == 1){
			list_items(1);

		 }
		 if(user_choice == 2){
				add();
				student_count++;
		 }
		 if(user_choice == 3){
			 delete_list();
		 }
		 if(user_choice == 4){
			 edit();
		 }
	 }
}
void add(){
	if(student_count <29){
	char name1[20];
	char name2[20];
	int grade;
	int oldness;
	int like;
	//**************************************
	printf("\n enter a first name \n");
	cin>>name1;
	strncpy(list[student_count].first_name, name1,19);
	list[student_count].first_name[19] = 0;
	//**************************************
	printf("\n enter last name \n");
	cin>>name2;
	strncpy(list[student_count].last_name, name2,19);
	list[student_count].last_name[19] = 0;
	//***************************************
	printf("\n enter their mark \n");
	cin>>grade;
	list[student_count].mark = grade;
	//***************************************
	printf("\n enter their age \n");
	cin>>oldness;
	list[student_count].age = oldness;
	//***************************************
		printf("\n enter how much you like them \n");
		cin>>like;
		list[student_count].likability = like;
	}
	else{
		printf("\n sorry you cannot add more people to the list, you are out of storage \n");
	}
}
void list_items(int full){
	 for(int i = 0; i<student_count; i++){
		 printf("\n \n student number: %d",i);
		 printf("\n First name: %s",list[i].first_name);
		 printf("\n Last name: %s",list[i].last_name);
		 if(full ==1){
		 printf("\n Mark: %d",list[i].mark);
		 printf("\n age: %d",list[i].age);
		 printf("\n how much you like them: %d",list[i].likability);
		 }
	 }

}
void delete_list(){
	int user_selection =0;
	list_items(0);
	printf("\n please enter the number of the student you want to delete ? \n");
	cin>>user_selection;

	for(int i = user_selection; i<30; i++){
		printf("re");
		list[i]= list[i+1];
	}

	student_count--;
}
void edit(){
	if(student_count==0){
		printf("\n you cannot edit what does not exist \n");
	}
	else{
	int student_selection = 0;
	int user_selection =0;
	printf("\n who would you like to edit");
	list_items(0);
	cin>>student_selection;
	printf("\n edit:\n 1. first name \n 2. last name\n 3. mark\n 4. age\n 5. likability\n");
	cin>>user_selection;
	if(user_selection==1){
		char new_name[20];
		cin>>new_name;
		strncpy(list[student_selection].first_name, new_name,9);
			list[student_selection].first_name[9] = 0;

	}
	if(user_selection==2){
			char new_name[20];
			cin>>new_name;
			strncpy(list[student_selection].last_name, new_name,19);
				list[student_selection].first_name[19] = 0;

		}
	if(user_selection==3){
				char new_mark;
				cin>>new_mark;
				list[student_selection].mark = new_mark;
			}
	if(user_selection==4){
					char new_likability;
					cin>>new_likability;
					list[student_selection].likability = new_likability;
				}
	}
}
