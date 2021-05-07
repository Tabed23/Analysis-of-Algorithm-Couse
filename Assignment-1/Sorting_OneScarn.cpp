#include<iostream>
#include<vector>
using namespace std;


void init(vector<int>&);
void print(vector<int>);
void LinerSearch(vector<int> &, int );
int main()
{  
    vector<int>v;
    init(v);
    print(v);
    int target;
    cout <<"enter the target value:";
    cin>> target;
    LinerSearch(v,target);
    return 0;
}
void init(vector<int>&v)
{
    for(int i=0;i<=15; i++)
    {
       v.push_back(rand()%20);
    }
}

void LinerSearch(vector<int>&v, int T)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == T)
        {
            cout <<"Value Found At Index :="<< i <<endl;
            return;
        }
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
