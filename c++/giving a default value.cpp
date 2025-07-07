#include<iostream>
using namespace std;
class figure {
	int l=5;
	int b;
	int s;
	int r;
	float pia=3.14;
	public:
	void area(int l,int b)
{
cout<<"\narea of rectanagle"<<l*b;
}
void area(int s)
{ 
cout<<"\narea of square"<<s*s;
}
void area(float pia, int r )
{ 
cout<<"\narea of circle"<<2*pia*r*r;
}
};
main()
{
figure f1;
f1.area(5);
f1.area(3);
f1.area(3);
}
