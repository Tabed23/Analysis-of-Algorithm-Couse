#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

stack<int> SortStack(stack<int> &);
void print(stack<int>);
int main() 
{ 
    stack<int> s; 
    s.push(13); 
    s.push(7); 
    s.push(18); 
    s.push(30); 
    s.push(2); 
    s.push(15); 
    print(s);
    stack<int> SortedStack = SortStack(s); 
    cout << "Sorted Stack \n"; 
    print(SortedStack);
    return 0;
} 

stack<int> SortStack(stack<int> &s) 
{ 
    stack<int> temp; 
    while (!s.empty()) 
    { 
        int top = s.top(); 
        s.pop(); 
        while (!temp.empty() && temp.top() > top) 
        { 
           
                  s.push(temp.top()); 
                temp.pop(); 
        } 
        temp.push(top); 
    } 
  
    return temp; 
} 
void print(stack<int>s)
{
      while (!s.empty()) 
    { 
        cout << s.top()<<endl; 
        s.pop(); 
    } 
}