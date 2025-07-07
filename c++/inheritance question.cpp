/*Assume that a bank maintains savings accounts for
customers. The savings account provides an interest
and withdrawal facility.
Create a class account that stores the customer name,
and account number and from this derive a savings account
to make it more specific to its requirement.
Include necessary member functions to achieve the following task
a)accept the deposit from the customer and update the balance
b)display the balance
c)compute interest
d)deposit interest*/

#include<iostream>
using namespace std;
class Account
{
	public:
		string name;
		int acc_no;
		int balance;
		public:
			void getdata()
			{
				cout<<"\nenter name,acc_no,balance";
				cin>>name>>acc_no>>balance;
				
			}
};
class saving:public Account
{
	int deposit,withdraw,time,rate;
	public:
		void get_deposit()
		{
			cout<<"\nenter deposit";
			cin>>deposit;
			balance=balance+deposit;
		}
		void get_withdraw()
		{
			cout<<"\nenter withdraw money";
			cin>>withdraw;
			balance-=withdraw;
		}
		void get_interest()
		{
			cout<<"\nenter time aand year";
			cin>>time>>rate;
			int i=(balance*time*rate)/100;
			balance+=i;
		}
		void show_balance()
		{
			cout<<"\nBalance="<<balance;
		}
	
};
main()
{
	saving s;
	s.getdata();
	s.show_balance();
	s.get_deposit();
	s.show_balance();
	s.get_withdraw();
	s.show_balance();
	s.get_interest();
	s.show_balance();
}
