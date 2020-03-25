#include<iostream> //18k0396
using namespace std;

 int search(char c ,string s,int a ,int size){
 	if(a==size){
 		cout<<"not found";
 		return -1;
 		
	 }
	 
	 else{
	 	if(s[a]==c){
	 		
	 		cout<<"found";
	 		return -1;
	 		
		 }
	 search(c,s,a+1,size);
	 }
 }
 
void count(char c,string s,int a,int size){
	
	int num;
	
	if(a==size){
		cout<<endl;
		cout<<num;
	//	return;
	}
	else{
		
		if(s[a]==c){
			
			num=num+1;
			
			
		}
		
		count(c,s,a,size);
		
	}
}

void remove(char c,string s,int a,int size){
	if(a==size){
		return ;
		
	}
	else{
		
		if(s[a]==c){
			s[a]=NULL;
			
		}
		remove(c,s,a,size);
		
	}
}

main(){
	search('a',"fatima",1,6);
	
	count('a',"fatima",6,6);
	
	remove('a',"fatima",6,6);
}
