//write a c++ program to create class student with data members name&age. member funtion are get_detais() and display_etails().call both memeber functions using object of the class.
#include<iostream>
using namespace std;
class student
{
	private:
		  string name;
		  int age;
	public:
			
		void get_detail()
		{
			cout<<"Enter your name		:";
			getline(cin,name);
			cout<<"Enter your age		:";
			cin>>age;
		}
		void display_detail()
		{
			cout<<"Your name is		:"<<name<<endl;
			cout<<"Your age is		:"<<age<<endl;
		}
};
int main()
{
	student s1;
	
	s1.get_detail();
	s1.display_detail();
	
	cout<<"daksh nanera 08";
	
	return 0;
}
