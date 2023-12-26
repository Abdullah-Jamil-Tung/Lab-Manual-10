/*4. Write a structure to store the names, salary, and hours of work per day of 10 employees in a company.
    Write a program to increase the salary depending on the number of hours of work per day as follows and
    then print the name of all the employees along with their final salaries.*/

#include <iostream>
#include <vector>
using namespace std;

//Structure named "Company"
struct Company
{
	//Declaring data members
    string name;
    float salary;
    float hours_worked;

    //Function to increase salary based on working hours
    void increase_in_salary()
	{
		//Increase salary by $50 for 8 hours worked
	    if (hours_worked>=8&&hours_worked<10) 
		{salary += 50;}
		
		//Increase salary by $100 for 10 hours worked
		else if (hours_worked>=10&&hours_worked<12) 
		{salary += 100;}
		
		//Increase salary by $150 for 12 or more hours worked
		else if (hours_worked>=12) 
	    {salary += 150;}
    }
};


int main() 
{
    //Declaring variables
    const int num_employee=10;
    Company employee[num_employee];

    //Taking inputs and computing result
    for (int i=0; i<num_employee; i++) 
	{
    cout<<"Enter employee name: ";
    cin>>employee[i].name;
    cout<<"Enter employee salary ($): ";
    cin>>employee[i].salary;
    cout<<"Enter hours worked per day: ";
    cin>>employee[i].hours_worked;
    cout<<endl;
    employee[i].increase_in_salary();
    }

    //Displaying result
    cout<<"\nFinal Employee Information:"<<endl;
    cout<<"\nName\t"<<"Final Salary"<<endl;
    for (int i=0; i<num_employee; i++)
    {
    cout<<"  "<<employee[i].name<<"\t  "<<employee[i].salary<<endl;
	}
    return 0;
}
