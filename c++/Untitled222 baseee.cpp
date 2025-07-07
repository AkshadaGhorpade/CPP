#include<iostream>
using namespace std;
class A
{
 public:
 void display()
 {
 	cout<<"\nBase A";
	 }	 	
};
class B
{
 public:
 void display()
 {
 	cout<<"\nBase B";
	 }	
};
class Derived : public A,public B
{
public:
void display()
{
	cout<<"\nDerived";
	}	
};
int main()
{
 Derived d;
 d.A::display();
 d.B::display();
 d.display();	
}
