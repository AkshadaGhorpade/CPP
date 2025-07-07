#include<iostream>
using namespace std;
class figure {
	int l;
	int b;
	int s;
	int r;
	double pia;
	public:
	void area(int s);//pass by value
	{
		side=s;
		cout<<"area of square"<<side*side;
		
	}
	void area(int *l, int *b);//pass by address
	{
		lenght=*l;
		breadth=*b;
		cout<<"area of rectangle"<<length*breadth;
		
	}
	void area(double &r, double &pia);//pass by 
	{
	    cout<<"area of circle"<<r*r*pia;
	}
};
	main()
{
figure f1;
f1.area(5);//pass by value
int a=10,int b=20;
f1.area(&a,&b);//pass by address
double A=3.14, double B=34.5
f1.area(A,B);
}

	

