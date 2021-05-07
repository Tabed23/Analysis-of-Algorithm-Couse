#include <iostream>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
void sort(vector<int>&);
bool bubleup(vector<int>&);
int main()
{
    srand(time(0));
    vector<int>v;
    init(v);
    print(v);
    auto start = time(0);
    cout<<"sorting data:"<<endl;
    sort(v);
    auto end = time(0);
    cout <<"total time taken"<< end - start <<endl;
    print(v);
    return 0;
}
void init(vector<int>&v)
{
    for(int i=0;i<=99;i++)
    {
        v.push_back(rand()%100);
    }
}
void print(vector<int>v)
{
        for(auto val :v)
            cout << val << ",";
        cout <<endl;
}
bool bubleup(vector<int>&v)
{
    bool change= false;
    for(int i=0; i<=v.size()-1;i++)
    {
        if(v[i] >v[i+1])
        {
            change = true;
            swap(v[i], v[i+1]);
        }
    }
    return change;
}
void sort(vector<int>&v)
{
   while(bubleup(v));
}
