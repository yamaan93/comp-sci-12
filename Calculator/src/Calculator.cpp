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
int subtract(int x, int y);
int divide(int x, int y);
int multiply(int x, int y);
int average(int averge[], int size);
int average_result;
int main() {
	while (true) {
		int user_selection;
		int input_values[2] = { };
		cout << "Calculator Console Application" << endl;
		cout << " would you like to :" << endl;
		cout << " 1. add" << endl;
		cout << " 2. subtract" << endl;
		cout << " 3. divide" << endl;
		cout << " 4. multiply" << endl;
		cout << " 5. average" << endl;

		cin >> user_selection; // intake what operation the user would like to partake in
		cout << user_selection << endl;
		if (user_selection <5) {
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
			printf("the average of your values are: %d \n",average_result);
	}
}

return 0;
}
int add(int x, int y) {
int result = x + y;
printf("%d+%d=%d \n", x, y, result);
return result;
}
int subtract(int x, int y) {
int result = x - y;
printf("%d-%d=%d \n", x, y, result);
return result;
}
int divide(int x, int y) {
int result = x / y;
printf("%d/%d=%d \n", x, y, result);
return result;
}
int multiply(int x, int y) {
int result = x * y;
printf("%dX%d=%d \n", x, y, result);
return result;
}
int average (int values[], int size) {
	cout<<size<<endl;
int result = 0;
for (int i = 0; i < size; i++) {
	result = result + values[i];
	}
average_result = result/size;
return average_result;
}
