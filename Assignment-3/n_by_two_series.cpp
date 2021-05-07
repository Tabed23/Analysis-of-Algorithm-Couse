#include<iostream>
using namespace std;

void two_series(long s, long d)
{
    if(s >= d)
    {
        return;
    }
    cout << s << ",";
    two_series(s *2, d);
    
}
void n_by_two_series(int n)
{
    two_series(1, n);    
}

int main()
{
    n_by_two_series(100);
}