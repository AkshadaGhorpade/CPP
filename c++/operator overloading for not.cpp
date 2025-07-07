#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
	demo()
	{
		x=1;
	}
	void show()
	{
		cout<<x<<endl;
	}
	void operator !()
	{
		cout<<x<<endl;
	}

};
main()
{
	demo d1;
	d1.show();
	!d1;
	d1.show();
	
	}
