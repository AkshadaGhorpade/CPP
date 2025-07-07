#include<iostream> 
using namespace std; 
class Shape 
{public: 
	int side,length,breadth; 
	public: 
		Shape() 
		{ 
			cout<<"\nenter side,length and breadth"; 
			cin>>length>>breadth>>side; 
		} 
	virtual	void area() 
		{ 
		cout<<"\narea";	 
		} 
		virtual void perimeter() 
		{ 
			 
		} 
}; 
class Square:public Shape 
{ 
	public: 
		void area() 
		{ 
			cout<<"\nArea of sqare is "<<(side*side); 
		} 
		void perimeter() 
		{ 
			cout<<"\nPerimeter of Sqaure is "<<(4*side); 
		} 
}; 
class Rectangle :public Shape 
{ 
	public: 
		void area() 
		{ 
			cout<<"\nArea of rectangle is "<<(length*breadth); 
		} 
		void perimeter() 
		{ 
			int p=2*(length+breadth); 
			cout<<"\nPerimeter of rectangle is "<<p; 
		} 
}; 
main() 
{ 
	Shape *ptr; 
	Square s; 
	Rectangle r; 
	ptr=&s; 
	ptr->area(); 
	ptr->perimeter(); 
	ptr=&r; 
	ptr->area(); 
	ptr->perimeter(); 
}
