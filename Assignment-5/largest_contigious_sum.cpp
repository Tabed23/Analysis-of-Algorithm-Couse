#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Soultion
{
private:
    vector<int> Add_Entry_To_New_Vector(vector<int>v,int start,int end)
    {
        vector<int>entry;
        for(int i=start; i<=end;i++)
        {
            entry.push_back(v[i]);
        }
        return entry;
    }
    
public:
    void print(vector<int>v)
    {
        for(vector<int>::iterator itr=v.begin(); itr!=v.end();itr++)
        {
            cout << *itr << " ";
        }
        cout <<endl;
    }

    pair<int,vector<int>>largestcontigioussum(vector<int>&v)
    { 
        int max=0,max_so_far =0,starting_inxdex=0,ending_index =0, i_th_entry = 0;
        for(int i=0; i<v.size(); i++)
        {
            max += v[i];
            if(max_so_far < max)
            {
                max_so_far = max;
                starting_inxdex = i_th_entry;
                ending_index = i;
            }
            if(max <0)
            {
                max = 0;
                i_th_entry = i+1;
            }
        }
        pair<int,vector<int>>ps;
        ps.first = max_so_far;
        ps.second = Add_Entry_To_New_Vector(v,starting_inxdex,ending_index);
        return ps;
    }
};
int main()
{
    Soultion *s = new Soultion;
    vector<int>vs ={-2,1,-3,4,-1,2,1,-5,4}; 
    s->print(vs);
    auto pair = s->largestcontigioussum(vs);
    cout <<"elements: ";
    s->print(pair.second);
    cout << "largest sum:=" << pair.first <<endl;
}