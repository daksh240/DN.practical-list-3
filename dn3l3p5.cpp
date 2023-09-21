#include<iostream>
using namespace std;
class Distance
{
	private:
		float feet,inches;
	public:
		
		void get_Distance()
		{
			cout<<"220130318008"<<endl;
			cout<<"daksh nanera"<<endl;
			cout<<"Enter the feet::";
			cin>>feet;
			cout<<"Enter the inches::";
			cin>>inches;
		}
		void display_Distance()
		{
			cout<<"The feet and inches of ::"<< feet << "feet" << inches << "inches";
		}
};
int main()
{
	Distance a;
	a.get_Distance();
	a.display_Distance();
}
