#include<iostream>
using namespace std;
class amount 
{
	private:
			int ACC_NO;
			char BRANCH_CODE[10];
			char BALANCE[10];
	public:
			void get_getchar()
			{
				cout<<"Enter the ACC_NO::";
				cin>>ACC_NO;
				cout<<"Enter the BRANCH_CODE::";
				cin>>BRANCH_CODE;
				cout<<"Enter the BALANCE::";
				cin>>BALANCE;
			}
			void get_display()
			{
				cout<<"the acc_no is::"<<ACC_NO<<endl;
				cout<<"the branch_code is::"<<BRANCH_CODE<<endl;
				cout<<"the balance is::"<<BALANCE<<endl;
			}
};
int main()
{
	amount a1;
	a1.get_getchar();
	a1.get_display();
	
	cout<<"daksh nanera 08";
	return 0;
}
