#include<iostream>
using namespace std;
class movie
{
	private:
		char title[40];
		int year;
		char director[40];
		public:
			void set_title()
			{
				cout<<"enter title\n";
				cin>>title;
			}
			void set_year()
			{
				cout<<"enter year\n";
				cin>>year;
			}
			void set_director()
			{
				cout<<"enter director name\n";
				cin>>director;
			}
			void display()
			{
				cout<<"\nTHE MOVIE INFORMATION IS";
				cout<<"\ntitle\t"<<title<<"\nyear\t"<<year<<"\ndirector\t"<<director;
				
			}
};
main()
{
	movie m1,m2;
	m1.set_title();
	m1.set_year();
	m1.set_director();
	cout<<"\ninfo for first movie";
	m1.display();
	m2.set_title();
	m2.set_year();
	m2.set_director();
	cout<<"\ninfo for second movie";
	m2.display();
	
}

