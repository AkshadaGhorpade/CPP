#include<iostream>
using namespace std;
enum etype{laborer,secretary,manager,accountant,excuive,researcher};
main()
{ 
char c;	
cin>>c;
switch(c)
{ case 'l':
	cout<<"laborer";
	break;
	case 's':
	cout<<"secretaryr";
	break;
	case 'm':
	cout<<"manager";
	break;
	case 'a':
	cout<<"accountant";
	break;
	case 'e':
	cout<<"excuive";
	break;
	case 'r':
	cout<<"researcher";
	break;
	case 'default':
	cout<<"unemployee";
	break;
	
			}
		}
				
