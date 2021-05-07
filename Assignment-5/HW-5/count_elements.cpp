#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
 {
public:
    int CountElements(vector<int>& v) 
    {
        vector<int> inc;
        int res =0;
        for(int i=0;i<v.size();i++)
        {
            inc.push_back(v[i]+1);
        }
        for(int i =0;i<v.size();i++)
        {
            auto it = find(v.begin(),v.end(),inc[i]);
            if(it!= v.end())
            {
                res++;
            }
        }
        return res;
    }
};
void print(vector<int>&);
int main()
{
    vector<int>v={1,1,2,3};
    print(v);
    Solution *s = new Solution;
  cout <<"output: "<<  s->CountElements(v)<<endl;
  vector<int>v2={1,1,3,3,5,5,7,7};
  print(v2);
  cout <<"output: "<<  s->CountElements(v2)<<endl;


}

void print(vector<int>&v)
{
    for(auto x:v)
    {
        cout << x << " ";
    }
    cout <<endl;
}