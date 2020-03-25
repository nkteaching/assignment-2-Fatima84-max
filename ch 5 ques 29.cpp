#include<iostream>
using namespace std; //18k 0396

int func(int num){
	
	if(num==1){
		cout<<num;
		
	}
	else{
		cout<<num<<" ";
		return func(num-1);
		
	}
}
main(){
	cout<<"no are:"<<endl;
	
	func(10);
}
