#include<iostream>
#include<string.h>
using namespace std;
class addString
{
	public:
		char str[100];
		void input()
		{
			cout<<"\n\tEnter Your String : ";
			cin.getline(str,100);    //use for input space in char data type data-member
		}
		void display()
		{
			cout<<"\n\tConcatenate String : "<<str;
		}
		addString operator+(addString s)
		{
			addString o;
			strcat(str,s.str);
			strcpy(o.str,str);
			return o;
		}
};
int main()
{
	addString s1,s2,s3;
	s1.input();
	s2.input();
	s3 = s1 + s2;
	s3.display();
	return 0; 
}