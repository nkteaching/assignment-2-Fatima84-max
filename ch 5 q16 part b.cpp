#include <string> //18k 0396
#include<iostream>

using namespace std;

bool test_palindrome (string& sentence,int first=0,int last=string::npos)
{
    if (last==string::npos) last=sentence.length()-1;
    if (sentence[first]==sentence[last])
    {
        if ((last-first)<2) return true;
        else return test_palindrome(sentence,first+1,last-1);
    }
    else return false;
}
main(){
	
}
