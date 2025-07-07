#include<iostream>
using namespace std;
union student
{
	char name [20];
	int age;
	float cgpa;
};
main()
{
	union student s1;
    cout<<sizeof(s1);
    cin>>s1.name;
    cin>>s1.age;
    cin>>s1.cgpa;
}
