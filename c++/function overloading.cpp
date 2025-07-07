#include<iostream>
using namespace std;
class figure {
	int l;
	int b;
	int s;
	int r;
	double pia;
	public:
	void area(int l,int b)
{
cout<<"\narea of rectanagle"<<l*b;
}
void area(int s)
{ 
cout<<"\narea of square"<<s*s;
}
void area(double pia, double r )
{ 
cout<<"\narea of circle"<<pia*r*r;
}
};
main()
{
figure f1;
f1.area(4,5);
f1.area(3);
f1.area(3.14,4.5);
}




