#include<iostream>
using namespace std;
class complex
{
	public:
		int a;
		int b;
		public :
			complex()
			{
				a=6;
				b=2;
			}
			complex(int x,int y)
			{
				a=x;
				b=y;
			}
				}
			complex operator -(complex cn1)
			{
				complex comp;
				comp.a=a-cn1.a;
				comp.b=b-cn1.b;
				cout<<"\n subtraction of imaginary number is"<<comp.a<<" j"<<comp.b;
			}
			complex operator *(complex cn2)
			{
				complex comp1;
				comp1.a=a*cn2.a;
				comp1.b=b*cn2.b;
				cout<<"\n subtraction of imaginary number is"<<comp1.a<<" j"<<comp1.b;
			}
};
int main()
{
	complex c1(4,2);
	complex c2(4,1);
	comp c;
	c=c1-c2;
	complex c4(4,2);
	complex c5(1,3);
	complex c6;
	c6=c4*c5;
}
