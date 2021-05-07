#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void init(vector<int>&);
void print(vector<int>&);
void removeDuplicates(vector<int>&);
int main()
{
    vector<int> vs;
    init(vs);
    print(vs);
    sort(vs.begin(), vs.end());
    removeDuplicates(vs);
    print(vs);
}

void init(vector<int>&v)
{
    for(int i=0; i<=20;i++)
    {
        v.push_back(rand()%15);
    }
}

void print(vector<int>&v)
{
    for(auto val : v)
    {
        cout << val << " ,";
    }
    cout <<endl;
}
void removeDuplicates(vector<int>&vs)
{
    vector<int>newVs;
    for(int i=0; i+1<vs.size();i++)
    {
        if(vs[i] ==  vs[i+1])
        {
            continue;
        }
        else
        {
            newVs.push_back(vs[i]);
        }
        
    }
    newVs.push_back(vs[vs.size()-1]);
    vs = newVs;
}