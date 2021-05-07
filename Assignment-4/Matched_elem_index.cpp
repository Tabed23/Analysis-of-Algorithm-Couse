#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

struct matched{
    int value;
    int index;
};

void init(vector<int>&);
void print(vector<int>&);
vector<matched> checkEqualPosition(vector<int>&v);
int main()
{
    srand(time(0));
    vector<int>v;
    init(v);
    std::unique(v.begin(),v.end());
    print(v);
    auto  Matched= checkEqualPosition(v);
    cout <<"Matched elemenet and indexs: ";
    for(auto i : Matched)
    {
        cout <<"value :" << i.value << " index :" << i.index <<" \n";
    }
    cout <<endl;
}

void init(vector<int>&v)
{
    for(int i=0; i<=50; i++)
    {
        v.push_back(rand()%50+1);
    }
}

void print(vector<int>&v)
{
    cout<<"<";
    for(auto x : v)
    {
        cout << x << " ,";
    }
    cout <<">";
    cout <<endl;
}
vector<matched> checkEqualPosition(vector<int>&v)
{
    vector<matched>matched_element;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == i)
        {
            matched mat;
            mat.value = v[i];
            mat.index = i;
            matched_element.push_back(mat);
        }
    }
    return matched_element;
}