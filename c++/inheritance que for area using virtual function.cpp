/*Create a base class called shape. Use this class to store two double type values ' 
that could be used to compute the area of figures. Derive two specific classes called 
triangle and rectangle from the base shape. Add to the base class, a member function get 
data() to initialize base class data members and another member. function display_area() 
to compute and display the area of figures. Make display_areal) as a virtual function 
and redefine this function in the derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions ofa triangle . 
or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
 the case of rectangles, and as base and height in the case of triangles, and used follows
Area of rectangle=x*y
Area of triangles =1/2 *x*y */
#include<iostream>
using namespace std;
class shape
{
	public:
		double x,y;
		void get_data()
		{
			cout<<"\nenter the value of x";
			cin>>x;
			cout<<"enter the value of y";
			cin>>y;
			
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
main()
{ 
    shape *s;
	rectangle r;
	triangle t;
	s=&r;
	s->get_data();
	s->display_area();
	s=&t;
	s->get_data();
	s->display_area();
	}

