#include<iostream>

#include<vector>
#include<map>
using namespace std;

void check_(vector<int>v)
{
    map<int,int>count;
    for(int i=0; i<v.size();i++)
    {
        count[v[i]]++;
    }
    for( auto x : count )
    {
        cout << x.first << " " << x.second <<endl;
    }
}
int main()
{
    vector<int>v={5,5,5,4,3,3,3,2,2,1};
    check_(v);
}


