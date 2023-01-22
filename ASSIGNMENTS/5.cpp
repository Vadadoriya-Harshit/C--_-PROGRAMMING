#include<iostream>
using namespace std;

class bank{
	public:
	long long ac_no;
	long long bal;
	string name;
	string ac_typ;
	
	void assign(string holname,long long accno,string actype,long long balance)
	{
		name=holname;
		ac_typ=actype;
		bal=balance;
		ac_no=accno;
	}
	  void deposit()
	  {
	  	double damt;
	  	cout<<"\n\n\t\tEnter Amount To Deposit         : ";
	  	cin>>damt;
	  	bal=bal+damt;
	  }
	 
	void withdraw()
	{
		double wamt;
		cout<<"\n\n\t\tEnter Amount To Withdraw         : ";
		cin>>wamt;
		
		if(wamt>bal)
		{
			cout<<"\n\n\t\t! Cannot Withdraw an Amount   ";
		}
		else
		{
			bal-=wamt;
		}
	}
	 void display()
	{
		cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2\xb2\xb2";    
		cout<<"\n\n\t\t Name     is  : "<<name;
		cout<<"\n\n\t\t Balance  is  : "<<bal;
	}
	
	
};


int main()
{
	long long accno;
	string holname;
	string actype;
	long long balance;
	
	cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2  STATE BANK OF INDIA \xb2\xb2\xb2\xb2\xb2\xb2";    
	cout<<"\n\n\t\t Enter Name Of The Dipositer  : ";
	getline(cin,holname);
	cout<<"\n\n\t\t Enter Account Number         : ";
	cin>>accno;
	cout<<"\n\n\t\t Enter Type Of The Account    : ";
	cin>>actype;
	cout<<"\n\n\t\t Enter Balance Of The Account : ";
	cin>>balance;
	
	bank obj;
	obj.assign(holname,accno,actype,balance);
	obj.deposit();
	obj.withdraw();
	obj.display();
	
	return 0;
}