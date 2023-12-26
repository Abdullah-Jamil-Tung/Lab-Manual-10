/*2. Write a complete C++ program that uses 2 vectors, 1 for names (string) and 1 for grades (int)*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    //a. Ask the user for the number of name/grade pairs that will be entered.
    int n;
    cout<<"Enter the number of name/grade pairs: ";
    cin>>n;

    //Declaring variables
    vector<string> names;
    vector<int> grades;
    
    //Taking inputs
    for (int i = 0; i<n; i++) 
	{
	cout<<endl;
    string name;
    int grade;

    cout<<"Enter name #"<<i + 1<< ": ";
    cin>>name;

    cout<<"Enter grade #" <<i + 1<<": ";
    cin>>grade;

    names.push_back(name);
    grades.push_back(grade);
    }
    cout<<endl;

    //b. Display the mean of the grades.
    float mean = 0.0;
    float sum;
	for (int i=0; i<grades.size(); i++)
	{
	sum+=grades[i];	
	}
	
	mean= float (sum/grades.size());
	cout<<"Mean = "<<mean<<endl;

    //c. Display the median of the grades.
    float median = 0.0;
    
    if (!grades.empty())
	{sort(grades.begin(), grades.end());
    size_t size = grades.size();
    
    if (size%2 == 0) 
	{median = (grades[size / 2 - 1] + grades[size / 2]) / 2.0;}
	 
	else 
	{median = grades[size / 2];}
    }
    
    cout<<"Median = "<<median<<endl;

    //d. Display the mode of the grades
    sort(grades.begin(), grades.end());;
    int mode=0, max_count=0, count=1;

    for (size_t i = 1; i < grades.size(); ++i) 
	{
	if (grades[i] == grades[i - 1])
	{++count;}
	else 
	{count = 1;}

    if (count>max_count)
	{max_count = count;
    mode = grades[i];}
    }

    cout<<"Mode = "<<mode<<endl;

    //e. Display the names of the students with the mode as their grade.
    cout<<"\nStudents with the mode as their grade: ";
    for (size_t i = 0; i < grades.size(); ++i)
	{if (grades[i] == mode) 
	{cout<<names[grades.size()-(i+1)]<<" ";}
    }
    cout<<endl;

    return 0;
}
