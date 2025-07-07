#include<iostream>
using namespace std;
class Base_A
{
 public:
 void display()
 {
 	cout<<"\nBASE A";
	 }	 	
};
class Base_B
{
 public:
 void display()
 {
 	cout<<"\nBASE B";
	 }	
};
class Derived : public Base_A,public Base_B
{
public:
void display()
{
	cout<<"\nDERIVED";
	}	
};
int main()
{
 Derived d;
 d.Base_A::display();
 d.Base_B::display();
 d.display();	
}
