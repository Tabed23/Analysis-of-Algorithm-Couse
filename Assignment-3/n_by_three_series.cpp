#include<iostream>
using namespace std;

void three_series(long s, long d)
{
    if(s >= d)
    {
        return;
    }
    cout << s << ",";
    three_series(s *3, d);
    
}
void n_by_three_series(int n)
{
    three_series(1, n);    
}

int main()
{
    n_by_three_series(100);
}