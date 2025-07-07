#include<iostream>
using namespace std;
main()
{
	//avrage of n numbers
	float i=1;
	float n=10;
	float sum,avrage;
	while(i<=n)
	{
		sum+=i;
		++i;	
	}
	avrage=sum/10;
	cout<<"avrage is "<<avrage;
	
	

}
