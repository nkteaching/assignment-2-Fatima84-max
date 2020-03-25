#include <bits/stdc++.h> //18k0396
using namespace std;  
stack<int> sortStack(stack<int> &input) 
{ 
    stack<int> tempStack; //my tempo stack
  
    while (!input.empty()) 
    { 
        int tmp = input.top(); 
        input.pop(); 
        while (!tempStack.empty() && tempStack.top() > tmp) 
        { 
            input.push(tempStack.top()); 
            tempStack.pop(); 
        } 
        tempStack.push(tmp); 
    } 
  
    return tempStack; 
} 
  
int main() 
{ 
    stack<int> input; 
    input.push(31); 
    input.push(42); 
    input.push(92); 
    input.push(56); 
  
    stack<int> tmpStack = sortStack(input); 
    cout << "Sorted numbers are:\n"; 
  
    while (!tmpStack.empty()) 
    { 
        cout << tmpStack.top()<< " "; 
        tmpStack.pop(); 
    } 
}
