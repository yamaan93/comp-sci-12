//============================================================================
// Name        : Calculator.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
double add(double x, double y);
double subtract(double x, double y);
double divide(double x, double y);
double multiply(double x, double y);
double average(int averge[], int size);
double area();
double average_result;
int main() {
	printf("\n \n \n \n");
	while (true) {
		int user_selection;
		double input_values[2] = { };
		cout << "Calculator Console Application" << endl;
		cout << " would you like to :" << endl;
		cout << " 1. add" << endl;
		cout << " 2. subtract" << endl;
		cout << " 3. divide" << endl;
		cout << " 4. multiply" << endl;
		cout << " 5. average" << endl;
		cout << " 6. find the area of shapes" << endl;

		cin >> user_selection; // intake what operation the user would like to partake in
		cout << user_selection << endl;
		if (user_selection !=5 && user_selection !=6) {
			cout << "what 2 numbers would you like to use" << endl;
			cin >> input_values[0];
			cout << "what is the second number?" << endl;
			cin >> input_values[1];
			cout << user_selection << endl;
		}
		if (user_selection == 1) {

			add(input_values[0], input_values[1]);

		}
		if (user_selection == 2) {
			subtract(input_values[0], input_values[1]);
		}
		if (user_selection == 3) {
			divide(input_values[0], input_values[1]);
		}
		if (user_selection == 4) {
			multiply(input_values[0], input_values[1]);
		}
		if (user_selection == 5) {
			int size;
			cout << "how many values do you want" << endl;
			cin >> size;
			int averages[size];
			for (int i = 0; i < size; i++) {
				printf("value %d :", i);
				cin >> averages[i];
			}
			 average(averages,size);
			printf("the average of your values are: %f \n",average_result);
	}
		if(user_selection ==6){
			area();
		}
}

return 0;
}
double add(double x, double y) {
double result = x + y;
printf("%f+%f=%f \n", x, y, result);
return result;
}
double subtract(double x, double y) {
double result = x - y;
printf("%f-%f=%f \n", x, y, result);
return result;
}
double divide(double x, double y) {
double result = x / y;
printf("%f/%f=%f \n", x, y, result);
return result;
}
double multiply(double x, double y) {
double result = x * y;
printf("%fX%f=%f \n", x, y, result);
return result;
}
double average (int values[], int size) {
	cout<<size<<endl;
double result = 0;
for (int i = 0; i < size; i++) {
	result = result + values[i];
	}
average_result = result/size;
return average_result;
}
double area(){
	int user_shape;
	double area;
	cout<<"which shape would you like?"<<endl;
	cout<<"1. circle"<< endl;
	cout<<"2.rectangle"<< endl;
	cout<<"triangle"<< endl;
	cin>>user_shape;
	if(user_shape==1 ){//circle
		double radius;
		cout<<"enter radius"<<endl;
		cin>>radius;
		area = 3.1415269*radius*radius;
		cout<<area<<endl;
	}
	if(user_shape==2 ){//rectangle
		double x;
		cout<<"enter side lenth 1:"<<endl;
		cin>>x;
		double y;
		cout<<"side length 2:"<<endl;
		cin>>y;
		area = y*x;

		}
	if(user_shape==3 ){//triangle
		double x;
		cout<<"enter side base"<<endl;
		cin>>x;
		double y;
		cout<<"side hight:"<<endl;
		cin>>y;
		double z = x*y;
		area = z/2;
		}
	return area;
}
