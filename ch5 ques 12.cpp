#include<iostream> //18k0396

using namespace std;

static int i=1;

int cubes(int num)
{
 while(i<=num)
 {
     if(i==1)
     {
         cout<<" "<<1;
         i++;
         (num-1);
     }
     else
     {
         cout<<" "<<(i*i*i);
         i++;
         cubes(num-1);
     }
}
	}

main(){
	cout<<"ans is :"<<endl;
    cout<<cubes(7);
}

