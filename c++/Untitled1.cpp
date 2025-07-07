#include <iostream>
#include <string>
using namespace std;
string askNumber(string prompt = "Please enter a number: ");
int main()
{
string number = askNumber();
cout << "Here is your number: " << number;
return 0;
}
 string askNumber(string prompt)
 {
 string number;
 cout << prompt;
 cin >> number;
 return number;
 }
