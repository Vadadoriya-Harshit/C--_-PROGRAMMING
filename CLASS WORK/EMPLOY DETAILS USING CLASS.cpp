#include<iostream>
using namespace std;

class Employee{
	
	public:
		int eid;
		string name;
		float salary;
			
		
		void showDetails(int eid,string name,double salary)
		{
			cout<<"\nId : "<<eid;
			cout<<"\nName : "<<name;
			cout<<"\nSalary : "<<salary;	
		}	
			
};

int main()
{
	Employee mann; // Object Creation.
	int eid;
	double salary;
	string name;
	
	cout<<"\nEnter Id : ";
	cin>>eid;
	fflush(stdin);
	cout<<"\nEnter Name : ";
	getline(cin,name);
	cout<<"\nEnter Salary : ";
	cin>>salary;
	mann.showDetails(eid,name,salary);
	
	return 0;
}