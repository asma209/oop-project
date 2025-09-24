#include<iostream>
using namespace std;
class arithmatic
{
	public:
	int a,b,c;
	public:
		void addition()
		{
			
			cout<<"enter no1.";
			cin>>a;
			cout<<"enter no2.";
			cin>>b;
			c=a+b;
			cout<<"result is\n"<<c;
		}
		void substract()
		{
			
		cout<<"enter no1.";
			cin>>a;
			cout<<"enter no2.";
			cin>>b;
			c=a-b;
			cout<<"result is\n"<<c;
		}
};
int main()
{
	arithmatic A;
	A.addition();
	A.substract();
	return 0;
}
