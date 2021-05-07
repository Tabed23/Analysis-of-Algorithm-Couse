#include<iostream>
#include<math.h>

using namespace std;


void print_two_power(int n)
{
    if(n== -1)
    {
        return;
    }
    print_two_power(n-1);
    cout << pow(2, n) <<endl;
}
int main()
{
    int n;
    cout <<"enter the n='th number till you want to seeen:";
    cin >> n;
    print_two_power(n);
}