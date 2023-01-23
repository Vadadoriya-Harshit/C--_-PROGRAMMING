#include<iostream>
using namespace std;
class Student{
	public:
		int rollno;
		string name;
		string city;
		Student(int rollno,string name,string city)
		{
			this->rollno=rollno;
			this->name=name;
			this->city=city;
		}
};
class info{
	private:
	Student *obj;
	public:
		int standard;
		
		info(int standard,Student *obj)
		{
			this->standard=standard;
			this->obj=obj;
		}
		int display()
		{
			cout<<"\n\n\t\t STANDARD    :- "<<standard;
			cout<<"\n\n\t\t ROLLNO      :- "<<obj->rollno;
			cout<<"\n\n\t\t NAME        :- "<<obj->name;
			cout<<"\n\n\t\t CITY        :- "<<obj->city;
			
				return 0;
		}
};
int main()
{
	Student obj1(1,"harshit","ahmdabad");
	info obj2(12,&obj1);
	obj2.display();
	return 0;
}