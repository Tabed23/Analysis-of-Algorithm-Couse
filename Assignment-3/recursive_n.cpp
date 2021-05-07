#include<iostream>
using namespace std;

void Print_recursive_nature_number(int n)
{
    if(n == 0)
    {
       return;
    }
    Print_recursive_nature_number(n-1);
    cout <<"["<<n <<"] ,";
}


int main()
{
    int number;
    cout <<"enter a n'th number till which you want to see:";
    cin >>number;
    Print_recursive_nature_number(number);
}