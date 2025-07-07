#include<iostream>
using namespace std;
class demo
{
	int x;
	public:
		demo()
		{
			x=10;
		}
		void decrement()
		{
			x--;
		}
		void show()
		{
			cout<<x<<endl;
		}
		void operator --()
		{
			cout<<"i am -- operator overloading"<<endl;
			x=x-10;
		}
		void operator --(int)
		{
			cout<<"i am post -- operator overloading"<<endl;
			x=x-10;
		}
	};
		main()
		{
			demo d1,d2;
			d1.show();
			--d1;
			d2--;
			d2.show();			
		}

