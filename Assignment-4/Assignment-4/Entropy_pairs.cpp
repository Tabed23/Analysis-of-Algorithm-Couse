#include<iostream>
#include<vector>
using namespace std;

struct pairs{
    int x;
    int y;
};
void print(vector<int>&);
void print_Entropy(vector<pairs>&);
vector<pairs> Entropy_Disorderness(vector<int>&);
int main()
{
    vector<int>v({3, 10, 2, 5, 15});
    print(v);
    auto entropy = Entropy_Disorderness(v);
    print_Entropy(entropy);
    cout << "resulting values :" <<entropy.size()<<endl;
    return 0;
}
void print(vector<int>&v)
{
    for(auto x : v)
    {
        cout << x << " ";
    }
    cout <<endl;
}
vector<pairs> Entropy_Disorderness(vector<int>&v)
{
    int *itr1 =new int,*itr2 =new int;
    *itr1 = 0,*itr2=0;
    vector<pairs>p;
    while(*itr1 <v.size()-1)
    {
        *itr2 = *itr1+1;
        while(*itr2 <v.size())
        {
            if(v[*itr1] > v[*itr2])
            {
                pairs pair;
                pair.x = v[*itr1];
                pair.y = v[*itr2];
                p.push_back(pair);
            }
            *itr2+=1;
        }
        *itr1+=1;
    }
    return p;
}
void print_Entropy(vector<pairs>&p)
{
    cout << "{";
    for(auto x : p)
    {
        cout <<"(" << x.x << "," << x.y<< ")";
    }
    cout <<"}";
    cout <<endl;
}
