/*3. Write a program to print the area and perimeter of a triangle having sides of 3 m, 4 m and 5 m 
    by creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
#include<cmath>
using namespace std;


//Class named "Triangle"
class Triangle
{
	//Access specifier
	public:
	
	//Function to print area
    void area()
	{
		//Declaring variables
		int a=3, b=4, c=5, s, area;
		
		//Computing and displaying result
		s = (a+b+c)/2;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"The Area of triangle is "<<area<<" square metres.\n"<<endl;
	}
	
	//Function to print perimeter
	void perimeter()
	{
		//Declaring variables
		int base=3, perp=4, height=5, perimeter;
		
		//Computing and displaying result
		perimeter = base + perp + height;
		cout<<"The Perimeter of triangle is "<<perimeter<<"m.\n"<<endl;
	}		
};


int main()
{
	//Declaring an object of class "Triangle"
	Triangle obj1;
	
	//Accessing member functions
	obj1.area();
	obj1.perimeter();
}
