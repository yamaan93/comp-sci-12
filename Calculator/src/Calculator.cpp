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

		cin >> user_selection; // intake what operation the user would like to partake in
		cout << user_selection << endl;
		if (user_selection == 213131332) {
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
			int average[size];
			for (int i = 0; i < size + 1; i++) {
				printf("value %d :", i);
				cin >> average[i];
			}
		average(average,size);

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
int avergage(int values[], int size) {
int result;
for (int i = 0; i < size+1; i++) {
	result = result + values[i];
	}
return result;
}
