#include<iostream>
#include<ctime>
#include<conio.h>

using namespace std;
  const int pin=3011;
  static int initial_balance=60000;
  const int one_attemp=1;
class atm
{
  private:
    int balance;
    int attempts;

  public:
    atm()
    {
    	balance=initial_balance;
    	attempts=one_attemp;
	}

    void welcome();
    void accountaccess();
    void helps();
    void atm_menu();
    void deposit();
    void withdraw();
    void checkbal();
    void exitscreen();
   
};
 void atm::welcome()
    {
     int reply;
     time_t now = time(0);
     char* currentTime = ctime(&now);
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 WELCOME TO ATM \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
     cout<<"\n\n\t\t\t\t---------------------------------------------";
     cout << "\n\n\t\t\t\t Current Date : " << currentTime;
     cout<<"\n\t\t\t\t---------------------------------------------";
     cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
     cout<<"\n\n\t\t\t Press [1] And Then Press Enter To Access Account Via Pin Number ";
     cout<<"\n\n\t\t\t\t\t\t\tor";
     cout<<"\n\n\t\t\t Press [2] And Press Enter To Get Help ";
     cout<<"\n\n\t\t\t\t\t\t :- ";
     cin>>reply;
     if(reply==1)
     {
      accountaccess();
     }
   else if(reply==2)
    {
      helps();
    }
    } 
void atm::accountaccess()
   {  
    int enteredpin;
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ATM ACCOUNT ACCESS \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 "; 
  cout<<"\n\n\t\t Enter Your Account Access Pin Number[Only One Attemp Is Allow.]   : ";
  cin>>enteredpin;
  // cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\t\t\t";
     
     if (enteredpin==pin)
     {
       atm_menu();
     }
     else
     {
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 THANK YOU \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
     cout<<"\n\n\t\t\t You had made your attemp which failed!!! No More attempts allowed!! SORRY!!";
     cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\t\t\t";
     cout<<"\n\n\t\t\t Press Eny Key To Continue . . . : ";
     getch();
     }
 }
void atm::helps()
    {
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ATM ACCOUNT STATUS \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
    cout<<"\n\n\t\t\t Your Must Have The Correct Pin Number To Access The Account See Your \n\n\t\t\t\tBank Representative For Assistance During Bamk Opening Hours.\n\n\t\t\t\t\t Thanks For,Your Choice Today!!";
    cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";
    cout<<"\n\n\t\t\t Press Eny Key To Continue . . . : ";
    getch();
  }
void atm::atm_menu()
{
  int choice;
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ATM MAIN MENU \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
     cout<<"\n\n\t\t\t\t\t Enter [1] To Deposit  Cash ";
       cout<<"\n\t\t\t\t\t Enter [2] To withdraw Cash ";
       cout<<"\n\t\t\t\t\t Enter [3] To Balance Inquiry ";
       cout<<"\n\t\t\t\t\t Enter [0] To Exit ATM ";

       cout<<"\n\n\t\t\t ENTER A SELECTION AND PRESS RETURN KEY : ";
       cin>>choice;
       switch(choice)
       {
        case 1:deposit();
        cout<<"\n\n\t\t\t Press any Key to Return to the main menu ";
	    getch();
	    atm_menu();
        break;
        case 2:withdraw();
        cout<<"\n\n\t\t\t Press any Key to Return to the main menu ";
	    getch();
	    atm_menu();
        break;
        case 3:checkbal();
        cout<<"\n\n\t\t\t Press any Key to Return to the main menu ";
	    getch();
	    atm_menu();
        break;
	    case 0:exitscreen();
        break;
       }
        
       
    	 
    // cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2";

}
 void atm::deposit()
 {
  int damt;
  
     cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ATM ACCOUNT DEPOSIT SYSTEM \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
     cout<<"\n\n\t\t\t The Names of the Acccount Holder Is :- Rakesh Kharva";
     cout<<"\n\n\t\t\t The Account Holder's Address is     :- Mumbai ";
     cout<<"\n\n\t\t\t The Branch Location  is             :- Andheri ";
     cout<<"\n\n\t\t\t Account Number is                   :- 5678 ";
    cout<<"\n\n\t\t\t Present available balance is         :- "<<balance;
     cout<<"\n\n\t\t\t Enter the Amount to be Deposit      :- ";
     cin>>damt;
     balance+=damt;
     cout<<"\n\n\t\t\t Your new available Balance Amount is RS. :- "<<balance;
     cout<<"\n\n\t\t\t\t\t\t Thank You! ";
     
	 
    
 }
 void atm::withdraw()
 {
 	int wamt;
 	cout<<"\n\n\t\t\t Enter an Amount TO  Withdraw : ";
 	cin>>wamt;
 	if(wamt>balance)
 	{
 	  cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ATM ACCOUNT WITHDRAWAL\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ";
      cout<<"\n\n\t\t\t The Names of the Acccount Holder Is :- Rakesh Kharva";
      cout<<"\n\n\t\t\t The Account Holder's Address is     :- Mumbai ";
      cout<<"\n\n\t\t\t The Branch Location  is             :- Andheri ";
      cout<<"\n\n\t\t\t Account Number is                   :- 5678 ";
      cout<<"\n\n\n\n\t\t\t Insufficient Available Balance in Your account.";
       balance=balance-150;
	 }
     else
     {
       cout<<"\n\n\t\t\t YOUr Withdrawal Is Success .Please Take Your Cash";
       balance-=wamt;
	 }
}
     void atm::checkbal()
     {
     	cout<<"\n\n\t\t\t Your Current Balance Is : "<<balance;
	 }
	 
	 void atm::exitscreen()
	 {
	 	
	 	system("CLS");
	 	cout<<"\n\n\t\t\t\t\t\t THANK YOU ,VISIT AGAIN.";
	 	
	 	
	 	
	 }
 
int main()
{
  atm a1;
  a1.welcome();
  
  
  return 0;
}