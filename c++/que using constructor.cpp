/*Bank Account Management System
You're tasked with creating a simple bank account management system in C++.
 Design a class called BankAccount to represent a bank account,
 with the following specifications:
Member Variables:
accountNumber: An integer representing the unique account number.
accountHolderName: A string representing the name of the account holder.
balance: A double representing the current balance in the account.
Constructor:
Define a constructor that initializes the accountNumber, accountHolderName, 
and balance when an object of the BankAccount class
 is created.
Member Functions:
deposit(double amount): A function that takes a double parameter amount and 
adds it to the account's balance.
withdraw(double amount): A function that takes a double parameter amount and subtracts it from
 the account's balance. Ensure that the withdrawal
 amount does not exceed the current balance.
displayAccountDetails(): A function that displays the account details including the account number,

 account holder name, and current balance.
Sample Usage:
Create objects of the BankAccount class and demonstrate the functionality by depositing and withdrawing 
amounts from the accounts, and displaying their details.
Implement the BankAccount class with the specified member variables and functions, and provide a sample
 usage of the class to demonstrate its functionality.*/
 #include<iostream>
 using namespace std;
 class bank_account
 {
 	int account_number;
 	string account_holder_name;
 	double balance;
 	public:
 	bank_account(int a,string b,double c)
 	{
 		account_number=a;
 		account_holder_name=b;
 		balance=c;
	 }
	 void deposite(double amount)
	 {
	 	balance=balance+amount;
	 	cout<<"the bank balance after depositing the money is : "<<balance;
	 }
	 void withdraw(double amount)
	 {
	 	balance=balance-amount;
	 	cout<<"the bank balance after withdrawing the money is : "<<balance;
	 }
	 void display()
	 {
	 	cout<<"the account number is : "<<account_number;
	 	cout<<"the account holder name is : "<<account_holder_name;
	 	cout<<"the balance amount is : "<<balance; 
	 }
 };
 main()
 {
 	bank_account B(12302956,"Akshada",10000.0);
 	B.deposite(400);
 	B.withdraw(200);
 	B.display();
	bank_account B1(12000924, "Akshay", 200000.90);
	B1.deposite(5000);
	B1.withdraw(2000);
	B1.display();
 }

