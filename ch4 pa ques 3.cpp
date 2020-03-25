#include <iostream>
#include <stack>
using namespace std;
bool delimiterMatching(char* file){
    stack<char> var;
    int counter = 0;
    char ch, temp, popd;
    do{
        ch = file[counter];
        if(ch == '(' || ch == '[' || ch == '{')
            var.push(ch);
        else if(ch == '/'){
            temp = file[counter+1];
            if(temp == '*')
                var.push(ch);
            else{
                ch = temp;
                continue;
            }
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            popd = var.top();
            var.pop();
            if(ch != popd)
                return false;
            }
        else if(ch == '*'){
            temp = file[counter+1];
            popd = var.top();
            var.pop();
            if(temp == '/' && popd != '/')
                return false;
            else{
                ch = temp;
                var.push(popd);
                continue;
            }
        }
        counter++;
    }while(ch != '\n');
    if(var.empty())
        return true;
    else return false;
}

 main(){
    char fileName[50];

    cout << "Enter an eq: (Ex. s=t[5]+u/(v*(w+y));   : ";
    cin >> fileName;
    cout << endl;

    if(delimiterMatching(fileName))
        cout << endl << "equation constructed successfully." << endl;
    else cout << endl << "equation is incorrectly constructed." << endl;
}
