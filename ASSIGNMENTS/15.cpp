#include<iostream>
using namespace std;
class addition{
	public:
		int arr1[5];
		int i;
		int sum;
		void add()
		{
			cout<<"\n\n\t\tEnter 1D Array Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- ";
				cin>>arr1[i];
			}
			
		}
		void display()
		{
			cout<<"\n\n\t\tEnter 1D Array Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- "<<arr1[i];
				
			}
		}
		void result()
		{
			for(i=0;i<5;i++)
			{
			sum+=arr1[i];
		    }
		cout<<"\n\n\t\t Addition Of 1D Array Is :- "<<sum;
				
				
			
		}
		
};
int main()
{
	addition ad;
	ad.add();
	ad.display();
	ad.result();
	return 0;
}