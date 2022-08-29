#include<iostream>
using namespace std;

class student 
{
    private:
	int reg_number;
	char grade;
	float cgpa;
	public:
	void getdata()//inline function

{
		cout<<"enter the registration number:";
		cin>>reg_number;
		cout<<"enter the grade:";
		cin>>grade;
		cout<<"enter the cgpa:";
		cin>>cgpa;
		
}
	void putdata();//non inline function
	};
	void student::putdata()
	{
		cout<<"\nregistration no is"<<reg_number<<endl;
		cout<<"Grade"<<grade<<endl;
		cout<<"CGPA"<<cgpa;
	}
	main()
	{
	  student s1; 
	  s1.getdata();
	  s1.putdata();
	}
