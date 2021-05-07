#include<iostream>



void print_odd(int n)
{
    if(n ==0)
    {
        return;
    }
    print_odd(n-1);
    if(n%2 != 0)
        std::cout << n <<" ,";
}

int main()
{
    int n;
    std::cout <<"enter a n 'th number till you want to see";
    std::cin >> n;
    print_odd(n);
    std::cout<<std::endl;
}