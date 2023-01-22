#include<iostream>
using namespace std;
class addition{
	public:
		int arr1[5],arr2[5];
		int i;
		int sum;
		void add()
		{
			cout<<"\n\n\t\tEnter 1D Array 1 Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- ";
				cin>>arr1[i];
			}
			cout<<"\n\n\t\tEnter 1D Array 2 Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- ";
				cin>>arr2[i];
			}
			
			
		}
		void display()
		{
			cout<<"\n\n\t\tEnter 1D Array 1 Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- "<<arr1[i];
				
			}
			cout<<"\n\n\t\tEnter 1D Array 2 Elements Are : ";
			for (int i=0;i<5;++i)
			{
				cout<<"\n\n\t\t tEnter Element["<<i<<"] :- "<<arr2[i];
				
			}
		}
//		void result()
//		{
//			for(i=0;i<5;i++)
//			{
//			
//		    }
//		cout<<"\n\n\t\t Addition Of 1D Array Is :- "<<sum;
//				
				
			
		//}
		
};
int main()
{
	addition ad;
	ad.add();
	ad.display();
	//ad.result();
	return 0;
}