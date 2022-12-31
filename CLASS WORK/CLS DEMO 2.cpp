#include<iostream>
using namespace std;

class student
{
	public:
		int standard;
		string name;
		float fees;

   void takedetails()
   {
   	cout<<"\n\n\t\t Enter Standard  : ";
   	cin>>standard;
   	fflush(stdin);
	cout<<"\n\n\t\t Enter Name      : ";
   //	cin>>name;
   getline(cin,name);
   	cout<<"\n\n\t\t Enter Fees      :  ";
   	cin>>fees;   	
   }
   
   void displaydetails()
   {
   	cout<<"\n\n\t\t Standard is    : "<<standard;
   	cout<<"\n\n\t\t Name     is    : "<<name;
   	cout<<"\n\n\t\t Fees     Is    : "<<fees;
   }
};

int main()
{
	student std;
	std.takedetails();
	std.displaydetails();
	
	return 0;
}