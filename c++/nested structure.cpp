#include<iostream>
using namespace std;
struct student
{
	int id;
	char name [20];
	float cgpa;
};
struct section
{
	int reg;
	struct student s1;
};
main()
{
	struct section r1;
	cin>>r1.reg;
	cin>>r1.s1.id;
    cin>>r1.s1.name;
    cin>>r1.s1.cgpa;
    cout<<r1.s1.id;
    cout<<r1.s1.name;
    cout<<r1.s1.cgpa;
	
	
}
