/*1. Iterate Through Vector Using Iterators and print all pushed elements.
    Next you need to push integer 5 and remove element at that position.*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Declaring variables
	vector<int> v;
	
	//Taking inputs
	for (int i=0; i<10; i++)
	{
	v.push_back(i);
	}
	
	//Iterating and printing the elements
	cout<<"The elements of vector 'v' = ";
	for (auto i=v.begin(); i != v.end(); ++i)
	{
	cout<<*i<<" ";
	}
	cout<<endl;
	
	//Pushing "5" at the end and removing the element
	v.push_back(5);
	v.erase(v.end()-2);
	
	//Displaying the vector after editing
	cout<<"The elements of vector 'v' after editing = ";
	for (auto i=v.begin(); i != v.end(); ++i)
	{
	cout<<*i<<" ";
	}
}
