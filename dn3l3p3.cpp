//write a c++ program to declare stucture of employee with data members like emp_name,emp_code,emp_salary,emp_branch and also display values of member variable.
#include<iostream>
using namespace std;

struct employee
{
	string ename;
	string ecode;
	string ebranch;
	int esalary;
}e1;

int main()
{
	cout<<"employee name is::"<<endl;
	getline(cin,e1.ename);
	cout<<"employee code is::"<<endl;
	getline(cin,e1.ecode);
	cout<<"employee branch is::"<<endl;
	getline(cin,e1.ebranch);
	cout<<"employee salary is::"<<endl;
	cin>>e1.esalary;
	cout<<"employee name is::"<<e1.ename<<endl;
	cout<<"employee code is::"<<e1.ecode<<endl;
	cout<<"employee branch is::"<<e1.ebranch<<endl;
	cout<<"employee salary is::"<<e1.esalary<<endl;
	return 0;
}
