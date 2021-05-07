#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

void init(vector<bool>&);
void print(vector<bool>);
void BooleanSearch(vector<bool>);
int main()
{
    vector<bool>v;
    init(v);
    print(v);
    BooleanSearch(v);
    return 0;
}
void BooleanSearch(vector<bool> v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] ==  1)
        {
            cout<< "missing index is :=" <<i <<endl;
            return;
        }
    }
}
void print(vector<bool>v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout <<v[i] <<",";
    }
    cout <<endl;
}
void init(vector<bool>&v)
{
    for(int i=0; i<=50; i++)
    {
        if(i == 37)
        {
            v.push_back(true);
        }
        else
        {
            v.push_back(false);
        }
        
    }
}