#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int no;
	public:
		void get_details()
		{
			
			cout<<"Enter the name::";
			getline(cin,name);
			cout<<"Enter the number::";
			cin>>no;
		}
		void get_display()
		{
			cout<<"Name is ::"<<name<<endl;
			cout<<"number is ::"<<no<<endl;
		}
};
int main()
{
	employee e;
	e.get_details();
	e.get_display();
	
	cout<<"daksh nanera 08";
	return 0;
}
