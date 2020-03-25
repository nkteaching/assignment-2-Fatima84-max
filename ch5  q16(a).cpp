#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
#include<iostream>
using namespace std;

bool Pal(char str[],int start,int end) 
{ 
    if (start == end) 
    return true; 
    
    if (str[start] != str[end]) 
    return false;
    
    if (start < end + 1) 
    return Pal(str, start + 1, end - 1); 
  
    return true; 
} 
  
bool ifPal(char str[]) 
{ 
int n = strlen(str); 
  
if (n == 0) 
    return true; 
  
return Pal(str, 0, n - 1); 
} 
  
int main() 
{ 
    char str[] = "fatima"; 
  
    if (ifPal(str)) 
    cout<<"yes"; 
    else
    cout<<"no"; 
  
} 

