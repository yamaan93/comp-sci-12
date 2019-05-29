
#include <iostream>
using namespace std;

class Shape {

public:

   virtual float area() {

      return -1;

   }

   virtual float perimeter() {

      return -1;

   }

};
class Circle :public Shape{
public:
	int radius;
	Circle(int radiusin){
		radius = radiusin;
	}
	virtual float area(){
		float area0 = 3.1415269*(radius*radius);
		return area0;
	}
	virtual float perimeter(){
		float perimeter0 = 2*3.1415269*radius;
		return perimeter0;
	}
};

class Square :public Shape{
public:
	int length;
	Square(int lengthin){
		length = lengthin;
	}
	virtual float area(){
		float area0 = length*length;
		return area0;
	}
	virtual float perimeter(){
		float perimeter0 = length*4;
		return perimeter0;
	}
};
class Rectangle :public Shape{
public:
	int length;
	int width;
	Rectangle(int length1in, int length2in){
		length = length1in;
		width = length2in;
	}
	virtual float area(){
		float area0 = length*width;
		return area0;
	}
	virtual float perimeter(){
		float perimeter0 = 2*(length+width);
		return perimeter0;
	}
};
int main() {


	 Shape *shapes[3];

	   shapes[0] = new Circle(5.0);
	   shapes[1] = new Square(5.0);
	   shapes[2] = new Rectangle(5.0, 10.0);

	   for (int i = 0; i < 3; i++)
	      cout << "Area=" << shapes[i] -> area() << " Perimeter=" << shapes[i] -> perimeter() << endl;

	   return 0;

}
