#include<iostream>
#include<string>

using namespace std;
class stack{
		int top;
		int size;
		char *p;
	public:
		stack(int a){
			size=a;
			p = new char[size];
			top=-1;
		}
		void push(int a){
			if(is_full()){
			
				top++;
				p[top]=a;
			}
			else{
				cout << "full";
			}
		}
		char pop(){
			cout << p[top] ;
			char l=p[top];
			top--;
			return l;
		}
		bool is_full(){
			if(top == size - 1){
				return 0;
			}
			else{
				return 1;
			}
		}
	
};
bool check(stack &a,stack &b,int c){
	bool chk=true;
	for(int i=0;i<c;i++){
		if(a.pop() != b.pop()){	
			chk = false;
		}
		cout << "\nchecking..." <<endl;
	}
	return chk;
}

int main(){
	string str;
	cout << "Enter String: " ;
	cin >> str;
	
	stack a(str.size()),b(str.size());
	
	for(int i=0;i<str.size();i++){
			a.push(str.at(i));
	}
	if(str.size()%2==0){
		for(int i=0;i<(str.size()/2);i++){
			b.push(a.pop());
		}
		
	}
	else{
		for(int i=0;i<(str.size()/2);i++){
			b.push(a.pop());
		}
		a.pop();
	}
	if(check(a,b,(str.size()/2))){
				cout << "\nYes its Palindrome";
			}
		else{
				cout << "\nNo its Palindrome";
		}
	}
	

