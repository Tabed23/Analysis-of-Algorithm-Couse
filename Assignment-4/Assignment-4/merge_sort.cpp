#include<iostream>
#include<vector>
using namespace std;

void init(vector<int>&);
void print(vector<int>&);
void merge_sort(vector<int>&v);
vector<int> Merge(const vector<int>&low, const vector<int>&high);
int main()
{
    vector<int>v;
    init(v);
    print(v);
    merge_sort(v);
    cout <<"after sorting \n";
    print(v);
}


void init(vector<int>&v)
{
    for(int i=0; i<=100;i++)
    {
        v.push_back(rand()%500);
    }
}
void print(vector<int>&v)
{
    for(auto c : v)
    {
        cout << c <<" ";
    }
    cout <<endl;
}

vector<int> Merge(const vector<int>&low,const vector<int>&high)
{
	vector<int>M(low.size() + high.size());

    for(int mi=0,l=0, h= 0; mi<M.size(); mi++)
    {
        if(h == high.size())
        {
            M[mi] = low[l];
            l++;
        }
        else if(l == low.size())
        {
            M[mi] = high[h],h++;
        }
        else if(low[l] <high[h])
        {
            M[mi] = low[l],l++;
        }
        else
        {
            M[mi]= high[h],h++;
        }
        
    }
    return M;
}
 
void merge_sort(vector<int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    vector<int>low(v.begin(), v.begin()+v.size()/2);
    vector<int>high(v.begin()+v.size()/2, v.end());
    merge_sort(low);
    merge_sort(high);
    v = Merge(low,high);
}