#include<iostream>

#include<vector>

using namespace std;

int Finbonacci_MamoriaztionHelper(vector<int>&v, int n)
{ 
    if(v[n]!=-1)
        return v[n];
    if(n ==0 || n ==1)
        return v[n] = n;
    return v[n] = Finbonacci_MamoriaztionHelper(v,n-1) + Finbonacci_MamoriaztionHelper(v,n-2);

}

int FibonacciMamoriation(int n)
{
    vector<int>v(n+1 ,{-1});

    return Finbonacci_MamoriaztionHelper(v, n);
}

int main()
{
    cout << "40 th fibonacci :="<< FibonacciMamoriation(40)<<endl;
}