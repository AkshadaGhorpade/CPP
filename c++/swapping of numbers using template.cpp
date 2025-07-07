 #include <iostream>  
using namespace std;  
template <class T>  
T swap_numbers(T& x, T& y)  
{  
    T t;  
    t = x;  
    x = y;  
    y = t;  
    return 0;  
}    
int main()  
{  
    int a, b;  
    a = 10, b = 20;  
    // Invoking the swap()  
    swap_numbers(a, b); 
    cout<<"\n value of a after swaping is "<<a;
    cout<<"\n value of b after swaping is "<<b;
    return 0;  
}
