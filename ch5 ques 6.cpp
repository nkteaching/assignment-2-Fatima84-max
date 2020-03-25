#include<iostream> //18k0396
using namespace std;

void func(long n)
{
    
    if(n<1000)
    {
        cout<<n;
    }
    else
    {
        int rem; //its reminder
        rem = n%1000;
        func(n/1000);
        cout<<","<<rem;
    }
}
main()
    {
    	cout<<"output is:"<<endl;
        func(123456);
    }
