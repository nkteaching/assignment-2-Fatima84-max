#include<iostream> //18k 0396
#include<cmath>

using namespace std;

float func(double num)
{
	if( num==1 ) //base case 
{
    return 1;
}
	else if(fmod(num,2) == 0)
{
    	return (func(num-1) + 1/num);
}
	else if(fmod(num,2) != 0)
{
     return (func(num-1) - 1/num);
}
}
int main()
{
	cout<<"result is:"<<endl;
	
    cout<<func(7);
}
