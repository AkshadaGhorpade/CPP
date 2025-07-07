/*Extend the above program to display the area of circles. This requires addition of a 
new derived class 'circle that computes the area of a circle. Remember, for a circle we
need only one value, its radius, but the get datal) function in the base class requires
two values to be passed, (Hint:Make the second argument of get datal function 
as a default one with zero value.)*/
#include<iostream>
using namespace std;
class shape
{
	public:
		double x,y,r;
		void get_data()
		{
			cout<<"\nenter the value of x";
			cin>>x;
			cout<<"enter the value of y";
			cin>>y;
		}
		void get_data1()
		{
			cout<<"enter the radius:";
			cin>>r;
		}
		virtual void display_area()
		{
		}
};
class rectangle:public shape
{
	public:
	 void display_area()
	{
		cout<<"\narea of a rectangle is"<<(x*y);
		
	 } 
};
class triangle:public shape
{
	public:
	 void display_area()
		{
			cout<<"\narea of a triangle is"<<(0.5*x*y);
		}
};
class circle:public shape
{
	public:
	 void display_area()
		{
			cout<<"\narea of a circle is"<<(0.314*r*r);
		}
};
main()
{ 
    shape *s;
	rectangle r;
	triangle t;
	circle c;
	s=&r;
	s->get_data();
	s->display_area();
	s=&t;
	s->get_data();
	s->display_area();
	s=&c;
	s->get_data1();
	s->display_area();
	}


