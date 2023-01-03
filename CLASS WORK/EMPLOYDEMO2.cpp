#include<iostream>
using namespace std;

class Employee{
	
	public:
		int eid;
		string name;
		float salary;
		
		void getDetails()
		{
			cout<<"\nEnter Id : ";
			cin>>eid;
			fflush(stdin);
			cout<<"\nEnter Name : ";
			//cin>>name;
			getline(cin,name);
			cout<<"\nEnter Salary : ";
			cin>>salary;
		}
		
		void showDetails()
		{
			cout<<"\nId : "<<eid;
			cout<<"\nName : "<<name;
			cout<<"\nSalary : "<<salary;	
		}	
		
	
	
};

int main()
{
	Employee mann; // Object Creation.
	mann.getDetails();
	mann.showDetails();
	
	return 0;
}