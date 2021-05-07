#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
auto IsEven = [](int n)->bool { return n %2==0; };
void SortEvenNumbers(vector<int>&);
int main()
{
    vector<int>v;
    init(v);
    print(v);
    cout <<"After sorting even indexes\n";
    SortEvenNumbers(v);
    print(v);
}
void init(vector<int>&v)
{
   v.push_back(20);
   v.push_back(11);
   v.push_back(12);
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

void SortEvenNumbers(vector<int>&v)
{
     vector<int>evens;

    for(int i=0; i<v.size(); i++)
    {
        if(IsEven(v[i]))
        {
            evens.push_back(v[i]);
        }
    }
    sort(evens.begin(), evens.end(), greater<>());
    int j=0;
    for(int i=0; i<v.size(); i++)
    {
        if(IsEven(v[i]))
        {
            v[i] = evens[j];
            j++;
        }
    }
    
}
