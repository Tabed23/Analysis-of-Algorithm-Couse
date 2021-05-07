#include <iostream>
#include<vector>
#include<time.h>
#include<algorithm>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
void sort(vector<int>&);
void InsertInSortedArray(vector<int>&, int);
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
void InsertInSortedArray(vector<int>&v, int vi)
{
    int i =vi;
    while(i-1>=0 && v[i]<v[i-1])
    {
        swap(v[i],v[i-1]);
        i--;
    }
}
void sort(vector<int>&v)
{
   int s = v.size();
   for(int i=1;i<=s-1;i++)
   {
    InsertInSortedArray(v,i);
   }
}
