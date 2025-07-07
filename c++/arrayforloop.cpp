#include<iostream>
using namespace std;
struct student 
{
	
	int age;
	float cgpa;
};
main()
{
	struct student s1[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter age"<<endl;
		
	
	cin>>s1[i].age;
	cout<<"enter cgpa"<<endl;
	cin>>s1[i].cgpa;
	
	
}
    for(int i=0;i<2;i++)
{
	cout<<s1[i].age<<endl;
	cout<<s1[i].cgpa<<endl;
}


