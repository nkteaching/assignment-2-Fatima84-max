//Ques 5 chapter 5 18k0396
#include<iostream>
using namespace std;

void odd1(int no)
{
    if(no>1)
    {
    if(no==1)
    {
         cout<<1;
    }
    else
    {
        if(no%2==0)
        {
        cout<<no-1;
        odd1(no-1);
    }
    if(no%2!=0 )
    {
        cout<<" "<<no-2;
        odd1(no-2);
    }
	}
	}
	}
	
    int i=1;
    void odd2(int no) //part b
{
    static int i=1;
   while(no>0 && i<no)
    {
        if(no%2==0)
        {
        cout<<" "<<i;
        i=i+2;
        odd2(no-1);
        }
     if(no%2!=0)
        {
        cout<<" "<<i;
        i=i+2;
        odd2(no-2);
}}}
    int main()
    {
        odd1(11);
        cout<<"\n";
        odd2(11);
    }

