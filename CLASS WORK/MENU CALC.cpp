#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<"\n\t\t\xb2\xb2\xb2\xb2\xb2 CALCULATOR \xb2\xb2\xb2\xb2\xb2 ";
	cout<<"\n\n\t\tEnter A : ";
	cin>>a;
	cout<<"\n\t\tEnter   B : ";
	cin>>b;
	
	cout<<"\n\t\tA ="<<",B = "<<b;
	
	cout<<"\n\n\t====================  MENU  ===================";
	cout<<"\n\n\t\tpress 1 for addition";
	cout<<"\n\t\tpress 2 for subtraction";
	cout<<"\n\t\tpress 3 for multiplication";
	cout<<"\n\t\tpress 4 for division";
	
	cout<<"\n\n\t\tEnter Your Choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"\t\taddition : "<<(a+b);
			break;
		case 2:cout<<"\t\tsubtraction : "<<(a-b);
			break;
		case 3:cout<<"\t\tmultiplication : "<<(a*b);
			break;
		case 4:cout<<"\t\tdivisiom : "<<(float)(a/b);
			break;
				
	}
	
	
	return 0;
}