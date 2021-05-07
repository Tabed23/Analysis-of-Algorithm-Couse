#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;


void init(vector<int>&);
void print(vector<int>);
int SumArray(int *, int );
void SumSearch(vector<int>);
int main()
{    srand(time(0));
    vector<int>v;
    init(v);
    print(v);
    SumSearch(v);
    return 0 ;
    
}
void init(vector<int>&v)
{
    for(int i=0;i<=15; i++)
    {
       v.push_back(rand()%20);
    }
}

void print(vector<int>v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout <<v[i] <<",";
    }
    cout <<endl;
}

int SumArray(vector<int>v)
{
    int sum = 0;
    for(int i=0;i<v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
void SumSearch(vector<int>v)
{
    int sum =  SumArray(v);
    cout <<"total sum of array:"<<sum <<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout <<sum -v[i] <<",";
    }
    cout <<endl;
}