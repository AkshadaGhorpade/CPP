#include<iostream>
using namespace std;
struct student
{
	int id;
	char name [20];
	float cgpa;
} s2;
main()
{
	struct student s1={1,"Akshada",9.5};
	cin>>s2.id;
	cin>>s2.name;
	cin>>s2.cgpa;
	cout<<s2.id<<endl;
	cout<<s2.name<<endl;
	cout<<s2.cgpa<<endl;
	
}

