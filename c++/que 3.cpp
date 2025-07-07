/*Create a class called time that has separate int member data for hours, minutes, and
seconds. One constructor should initialize this data to 0, and another should initialize it
to fixed values. Another member function should display it, in 11:59:59 format. The final
member function should add two objects of type time passed as arguments.
Amain() program should create two initialized time objects (should they be const?) and
one that isn’t initialized. Then it should add the two initialized values together, leaving the
result in the third time variable. Finally it should display the value of this third variable.
Make appropriate member functions const.*/
#include<iostream>
using namespace std;
class time
{
	int hours;
	int min;
	int sec;
	public:
		time()
		{
			hours=0;
			min=0;
			sec=0;
		}
		time(int h,int m, int s)
		{
			hours=h;
			min=m;
			sec=s;
		}
		void display()
		{
			cout<<"hrs"<<hours;
			cout<<"min"<<min;
			cout<<"sec"<<sec;
		}
		time add(time &a1, time &a2)
		{
		   int total_sec=a1.sec+a2.sec;
		   int carry_min=total_sec/60;
		   int remaining_sec=total_sec%60;
		   int total_min=a1.min+a2.min+carry_min;
		   int carry_hrs=total_min/60;
		   int remaining_min=total_min%60;
		   int total_hrs=a1.hours+a2.hours+carry_hrs;
		   return time(total_hrs,remaining_min,remaining_sec);
		}
		
};
main()
{
	time t1(8,4,3);
	time t2(3,5,6);
	time t3;
	t3=t3.add(t1,t2); //object pass as a arg to a function
	t3.display();	
}
