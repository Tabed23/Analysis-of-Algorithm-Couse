#include <iostream>
#include<vector>
#include<time.h>
#include<algorithm>
#include<set>
using namespace std;
bool isReapeated(vector<int>&, int );
void init(vector<int>&);
void print(vector<int>);
vector<int>DistinctElement(vector<int>&);
vector<int>FindUnique(vector<int>);
int main()
{
    srand(time(0));
    vector<int>v;
    init(v);
    print(v);
    auto start = time(0);
    auto vs = DistinctElement(v);
    auto end = time(0);
    cout <<"total time taken :="<< end - start <<endl;
    print(vs);
    cout << "Distinct Element in Sorted Increasing order :";
    sort(vs.begin(),vs.end(),less<>());
    print(vs);
    auto unique = FindUnique(v);
    cout <<" Unique element Sorted  Decreasing orde :";
    sort(unique.begin(), unique.end(), greater<>());
    print(unique);
    return 0;
}
void init(vector<int>&v)
{
   v.push_back(20);
   v.push_back(11);
   v.push_back(12);
   v.push_back(20);
   v.push_back(16);
   v.push_back(15);
   v.push_back(12);
   v.push_back(16);
   v.push_back(8);
   v.push_back(12);
}
void print(vector<int>v)
{
        for(auto val :v)
            cout << val << ",";
        cout <<endl;
}
bool isReapeated(vector<int>&v, int val)
{
  int count = 0;

    for(int i=0; i<v.size();i++)
    {
        if(v[i] == val)
        {
            count ++;
        }
        if(count >= 2)
        {
            return true;
        }
    }
    return false;
}
vector<int>DistinctElement(vector<int>&v)
{
    vector<int>vs;
    for(int i=0; i<v.size();i++)
    {
        if(isReapeated(v, v[i]))
        {
            continue;
        }
        else{
            vs.push_back(v[i]);

        }
    }
    return vs;
}
vector<int>FindUnique(vector<int>v)
{
    vector<int>vs;
    set<int>s;
    for(auto x :v)
    {
        s.insert(x);
    }
    for(auto x : s)
    {
        vs.push_back(x);
    }
    return vs;
}