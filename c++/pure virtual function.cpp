/*Imagine a publishing company that markets both book and audiocassette versions 
of its works.Create a class publication that stores the title 
(a string) and price (type float) of a publication.From this class derive two 
classes: 
book, which adds a page count (type int),and tape, which adds a playing time in 
minutes (type float). Each of these three classes should have a getdata() 
function to get its data from the user at the keyboard,and a putdata() function
to display its data. getdata()and putdata must be pure virtual function in base
class.Write a main() program to test the book and tape classes by creating 
instances of them,asking the user to fill in data with getdata(), 
and then displaying the data with putdata().*/

#include<iostream>
using namespace std;
class publication{
	protected:
		string title;
		float price;
	public:
		publication()
		{
			cout<<"\nenter the name\n";
			cin>>title;
			cout<<"\nenter the price\n";
			cin>>price;
		}
		virtual void get_data()=0;
		virtual void put_data()=0;
};
class book:public publication{
	int page_count;
	public:
		void get_data()
		{
			cout<<"\nenter the page count\n";
			cin>>page_count;
		}
		void put_data()
		{
			cout<<"\nthe title is "<<title;
			cout<<"\nthe price is "<<price;
			cout<<"\nThe page count is "<<page_count;
		}
};
class tape:public publication{
	float playing_time;
	public:
		void get_data()
		{
			cout<<"\nenter the playing time\n";
			cin>>playing_time;
		}
		void put_data()
		{
			cout<<"\nThe playing time is "<<playing_time;
		}
};
main()
{
	publication *ptr;
	ptr=new book ;
	ptr->get_data();
	ptr->put_data();
	ptr=new tape;
	ptr->get_data();
	ptr->put_data();
}
