#include <iostream>
using namespace std;

class account
{
public:
	int choice;
	int wamt;
	int damt;
	string name;
	int cbalance;
	string actyp;
	long long accno;
	double balance=124000;
	
	void welcome()
	{
		cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 WELCOME TO STATE BANK OF INDIA \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
		 cout<<"\n\n\t\t\t ************************* MENU ******************** ";
		 cout<<"\n\n\t\t\t\tPress 1 For vving Account    ";
		 cout<<"\n\n\t\t\t\tPress 2 For Current Account  ";
		 cout<<"\n\n\t\t\t Enter Your choice  : ";
		 cin>>choice;
		 if(choice==1)
		 {
		 	saving();
		 }
		 else if(choice==2)
		 {
		 	panelty();
		 }
	}
	
	void saving()
   {

   	  cout<<"\n\n\t\t\t----------------------------------------------------------------------";
   	  cout<<"\n\n\t\t\t                        SAVING ACCOUNT                                ";
   	  cout<<"\n\n\t\t\t----------------------------------------------------------------------";
   	   
   	    cout<<"\n\n\t\t\t Enter Account Holder Name : ";
	  	cin>>name;
	  	getline(cin,name);
	  	cout<<"\n\n\t\t\t Enter Account Number      : ";
	  	cin>>accno;
	  	fflush(stdin);
	  	//cout<<"\n\n\t\t Enter Account Type        : ";
	  	//cin>>actyp;
	  	cout<<"\n\n\t\t \t Account Balance          : "<<balance;
	  	interest();
	  	
   }
   	void panelty()
	{
		
      cout<<"\n\n\t\t\t----------------------------------------------------------------------";
   	  cout<<"\n\n\t\t\t                        CURRENT ACCOUNT                                ";
   	  cout<<"\n\n\t\t\t----------------------------------------------------------------------";
   	  cout<<"\n\n\t\t\t There is neccesary to keep minimum balance Rs. 1000 ,if \n\t\t\t balance is less than 1000,then panelty of Rs 1000 IS Cut\n\t\t\t Automatic from Your Account ";
	  cout<<"\n\n\t\t\t FACILITY :- CHEQUE BOOK ";
	  cout<<"\n\n\t\t\t Enter Current Acccount Balance : ";
	  cin>>cbalance;
		if(cbalance<1000)
		{
		    cbalance-=1000;
			cout<<"\n\n\t\t\t Account Balance is : ";
			cin>>cbalance;
		}
		else
		{
			current();
		}
	}
	void current()
	{
		
		
   	    cout<<"\n\n\t\t\t Enter Account Holder Name : ";
	  	cin>>name;
	  	getline(cin,name);
	  	cout<<"\n\n\t\t\t Enter Account Number      : ";
	  	cin>>accno;
	  	fflush(stdin);
	  	cout<<"\n\n\t\t \t Account Balance          : "<<cbalance;
	  	
	}
	void interest()
	{
		float rate=2.5;
		int time;
		
		cout<<"\n\n\n\t\t\t Enter Time Interval In Year  : ";
		cin>>time;
		int interest= balance*rate*time/100;
		balance+=interest;
		cout<<"\n\n\t\t\t Balance with interest is     : "<<balance;
	}
	void deposit()
	{
		cout<<"\n\n\t\t\t Enter Amount To Deposit : ";
		cin>>damt;
		balance+=wamt;
	}
	void withdraw()
	{
		if(wamt<balance)
		{
		cout<<"\n\n\t\t\t Enter Amount To Withdraw : ";
		cin>>wamt;
		balance+=wamt;
		cout<<"\n\n\t\t\t your transaction is completed. ";
		cout<<"\n\n\t\t\t Updated Balance Is       : "<<balance;
	     }
	     else
	     {
	    cout<<"\n\n\t\t\t you have unsufficient balance : ";
		
		 }
		
	}

};


int main(int argc, char const *argv[])
{
	account act;
	act.welcome();
	act.deposit();
	act.withdraw();
	
	return 0;
}