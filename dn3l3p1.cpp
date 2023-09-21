//write a c++ program that declare student stucture with data members name,std,percentage.take value for these data members and display it.
#include<iostream>
using namespace std;
struct student
{
	string name;
	int std;
	float per;
};
int main()
{
	student s1;
	cout<<"Enter the student name			:";
	getline(cin,name);
	cout<<"Enter the student standrd		:";
	cin>>s1.std;
	cout<<"Enter the student percentage		:";
	cin>>s1.per;
	cout<<"The student name is			:"<<s1.name<<endl;
	cout<<"The student standard is			:"<<s1.std<<endl;
	cout<<"The student name percentage		:"<<s1.per<<endl;
	return 0;
}
