#include<iostream>
#include<vector>
using namespace std;


void init(vector<int>&);
bool RangeSearch(vector<int>, int, int , int);
void print(vector<int>);
void Search(vector<int>, int);
int main()
{  
    vector<int>v;
    init(v);
    print(v);
    int target;
    cout <<"enter the target value:";
    cin>> target;
    Search(v,target);
    return 0;
}

bool RangeSearch(vector<int>v, int si, int ei, int T)
{
    for(int i=si; i<=ei; i++)
    {
        if(v[i] == T)
        {
            cout <<"Value Found At Index :="<< i <<endl;
            return true;
        }
    }
    return false;
}
void Search(vector<int>v, int target)
{
    for(int i=0;i<v.size(); i++)
    {
        if(RangeSearch(v,i,v.size()-i,target))
            return;
    }
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