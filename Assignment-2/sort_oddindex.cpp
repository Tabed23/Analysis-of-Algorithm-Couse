#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
auto IsEven = [](int n)->bool { return n %2==0; };
void SortEvenIndex(vector<int>&);
int main()
{
    vector<int>v;
    init(v);
    print(v);
    cout <<"After sorting odd indexes\n";
    SortEvenIndex(v);
    print(v);
}
void init(vector<int>&v)
{
   v.push_back(20);
   v.push_back(11);
   v.push_back(12);
   v.push_back(14);
   v.push_back(16);
   v.push_back(15);
   v.push_back(19);
   v.push_back(13);
   v.push_back(18);
   v.push_back(17);
}
void print(vector<int>v)
{
        for(auto val :v)
            cout << val << ",";
        cout <<endl;
}

void SortEvenIndex(vector<int>&v)
{
    vector<int>odds;

    for(int i=0; i<v.size(); i++)
    {
        if(!IsEven(i))
        {
            odds.push_back(v[i]);
        }
    }
    sort(odds.begin(), odds.end(), less<>());
    int j=0;
    for(int i=0; i<v.size(); i++)
    {
        if(!IsEven(i))
        {
            v[i] = odds[j];
            j++;
        }
    }
}
