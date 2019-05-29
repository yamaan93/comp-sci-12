//============================================================================
// Name        : multi.cpp
// Author      : Yamaan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Basket.h"


class b{
	private:
		int x;
	friend int foo(b*instance_of_b);
};

int foo(b* instance_of_b){
	cout<<instance_of_b->x;
}

int main() {
	 // 1 mark for default constructor
	   Basket b1; // Create a basket with 0 items
	   cout<<b1.quantity<<endl;
	   // 1 mark for additional constructor with parameter
	   Basket b2(5); // Create a basket with 5 items

	   // 1 mark for member function
	   b1.addToBasket(2); // Add two items to b1

	   // 1 mark for comparison function
	   if (b1.isEqualTo(b2)) // Should return true if number of items in each basket is equal
	      cout << "Same number of items in both b1 and b2" << endl;
	   // Or code this using a static member function, whichever is easier for you

	   // 1 mark for member access function
	   cout << "There are " << b1.getNumItems() << " items in b1" << endl;
}

/*
b* thing = new b();
foo(thing);
delete thing;
person jeff(1);
jeff.die();

return 0;
*/
