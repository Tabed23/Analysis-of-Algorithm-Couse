#include<iostream>
#include<math.h>

using namespace std;


void print_three_power(int n)
{
    if(n== -1)
    {
        return;
    }
    print_three_power(n-1);
    cout << pow(3, n) <<endl;
}
int main()
{
    int n;
    cout <<"enter the n='th number till you want to seeen:";
    cin >> n;
    print_three_power(n);
}