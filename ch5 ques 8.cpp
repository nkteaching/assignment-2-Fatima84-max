#include<iostream> //18k 0396

using namespace std;
int multi(int a,int b)
{
    if(a==0 || b ==0) //base case 
    {
        return 0;
    }
    else if( b == 1)
    {
        return a;
    }
    else if(b > 1)
    {
        return a + multi(a,b-1); //recursive call
    }
}
 main()
{
    cout<<multi(3,4); //func call
}
   
