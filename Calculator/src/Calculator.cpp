//============================================================================
// Name        : Calculator.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int add(int x, int y);
int substract(int x, int y);
int divide(int x, int y);
int multiply(int x, int y);
int average(int averge[]);
int main() {
	int user_selection;
	int input_values[] = {};
	cout << "Calculator Console Application" << endl;
	cout << " would you like to :"<<endl;
	cout << " 1. add"<<endl;
	cout << " 2. subtract"<<endl;
	cout << " 3. divide"<<endl;
	cout << " 4. multiply"<<endl;

	cin>> user_selection;// intake what operation the user would like to partake in
	cout << "what 2 numbers would you like to use"<<endl;
	cin >> input_values[0];
	cout <<"what is the second number?"<<endl;
	cin >> input_values[1];
	if(user_selection == 1){

		add(input_values[0],input_values[1]);

	}
	else if(user_selection == 2){
	//	subtract();
	}


	return 0;
}
int add(int x, int y){
	int result = x+y;
	printf("%d+%d=%d",x,y,result);
	return result;
}
int substract(int x, int y){
	int result = x-y;
	return result;
}
int divide(int x, int y){
	int result = x/y;
	return result;
}
int multiply(int x, int y){
	int result = x*y;
	return result;
}
int avergage(int values[]){
	int result;
	return result;
}
