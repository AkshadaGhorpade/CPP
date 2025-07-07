#include<iostream>
using namespace std;
union student
{
	int id;
	char name [20];
	float cgpa;
};
main()
{
	union student r1;
    cout<<sizeof(r1);
	
	
}
