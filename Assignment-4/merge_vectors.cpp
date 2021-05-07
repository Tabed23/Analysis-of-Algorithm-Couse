#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void init(vector<int>&);
void print(vector<int>&);
vector<int>Merge(vector<int>&,vector<int>&);
int main()
{
    srand(time(0));
    vector<int>v1,v2;
    init(v1),init(v2);
    sort(v1.begin(),v1.end());sort(v2.begin(),v2.end());
    print(v1),print(v2);
    auto vs = Merge(v1,v2);
    cout <<"after merging\n";
    print(vs);
    return 0;
}
void init(vector<int>&v)
{
    for(int i=0; i<=15;i++)
    {
        v.push_back(rand()%20);
    }
}
void print(vector<int>&v)
{
    for(auto x : v)
    {
        cout << x << " ,";
    }
    cout <<endl;
}
vector<int>Merge(vector<int>& v1,vector<int>&v2)
{
    vector<int>vs(v1.size()+v2.size());
    merge(v1.begin(),v1.end(), v2.begin(), v2.end(),vs.begin());
    sort(vs.begin(),vs.end());
    return vs;
}
