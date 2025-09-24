#include<iostream>
using namespace std;
class circle
{
	float r,a;
	public:
		void read ()
		{
			cout<<"enter a radius";
			cin>>r;
		}
		void compute()
		{
			a=3.14*r*r;
		}
		void display()
		{
			cout<<"area"<<a;
		}
};
int main()
{
	circle C;
	C.read();
	C.compute();
	C.display();
	return 0;
}
