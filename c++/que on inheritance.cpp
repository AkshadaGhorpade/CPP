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
class account
{
	protected:
		char name[20]="Sanskar";
		long int acc_num=123456789;
	public:
		void show()
		{
			cout<<"\nName is "<<name;
			cout<<"\naccount no. is"<<acc_num;
		}
};
class savings_account:public account
{
	private:
		float amount,balance=100.0,interest;
	public:
		void accept()
		{
			cout<<"\nenter the amount to be deposited";
			cin>>amount;
			balance+=amount;	
		}
		void display()
		{
			cout<<"\nbalance available is"<<balance;
		}
		void compute()
		{
			interest=(balance*5)/100;
			
		}
		void deposit()
		{
			balance+=interest;
		}	
};
main()
{
	savings_account sa;
	sa.accept();
	sa.display();
	sa.compute();
	sa.deposit();
	sa.display();
	
}
