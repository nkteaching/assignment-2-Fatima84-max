#include<iostream>
using namespace std;

class node{
	public:
		
	node *next;
	int data;
	
	node(int data){
		this->data=data;
		next=NULL;
	}
	
};

class linked{
	public:
		
	int size;
	node *head;
	node *tail;
	public:
		
	linked(){
		size=0;
		head=NULL;
		tail=NULL;
		
	}
	
	int getsize(){
		return size;
		
	}
	
	void prepend(int data){
		
		node *n=new node(data);
		
		if(head==NULL){
			head=tail=n;
			
		}
		
		else{
			
			node *temp=new node(data);
			
			temp->next=head;
			head=temp;
			
		}size++;
		
	}
	
	void append(int data){
		
		node *n=new node(data);
		
		if(head==NULL){
			head=tail=n;
			
		}
		else{
			
			tail->next=n;
			tail=n;
			
		}size++;
		
		
	}
	
	void show(){
		
		node *temp=head;
		
		while(temp!=NULL){
			
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
		
	}
	
	int getCount(node* head)  
{  
    int count = 0; // Initialize count  
    node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
} 

};

main(){
	
	linked ob1;
	ob1.prepend(12);
	ob1.prepend(5);
	ob1.prepend(3);
	ob1.show();
	cout<<"count of nodes is "<< ob1.getCount(ob1.head);  
	
}
