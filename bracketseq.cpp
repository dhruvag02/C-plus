#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string expr){
stack<char> s;
char x;
int i = 0;
for(;i<expr.length();i++){
        if(expr[i] == '(' ||expr[i] == '{' ||expr[i] == '[')
            {s.push(expr[i]);
            continue;}
if(s.empty())
    return false;

switch(expr[i]){
    case ')':
    x = s.top();
    s.pop();
    if(x == '{' || x == '[')
        return false;
    break;

    case '}':
    x = s.top();
    s.pop();
    if(x == '(' || x == '[')
        return false;
    break;

    case ']':
    x = s.top();
    s.pop();
    if(x == '{' || x == '(')
        return false;
    break;

    default:
    cout<<"Invalid operation"<<endl;
    break;
    }   
}
return(s.empty());
}

int main(){
    string expr = "{()}[]";
    if(isBalanced(expr))
        cout<<"Balanced"<<endl;
    else
        cout<<"Unbalanced"<<endl;
    return 0;
}