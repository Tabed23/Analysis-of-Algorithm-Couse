#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class pair_sum_
{
private:
    pair<int,int> X_sum_helper(vector<int>&v, int start, int end,int x)
    {
    
        pair<int,int> sums;
        sums.first  =-1;
        sums.second = -1;
        sort(v.begin(), v.end());
        while (start < end)
        {
            if(v[start]+ v[end] ==  x)
            {
                sums.first = v[start];
                sums.second = v[end];
                return sums;
            }
            if(v[start] + v[end] < x)
            {
                start++;
            }
            else if (v[start] + v[end] >x)
            {  
                end--;
            }
        }
        return sums;
    }
public:
    pair<int,int> find_X_sum(vector<int>Vs, int x)
    {
        int low = 0;
        int high = Vs.size()-1;
        auto  sums = X_sum_helper(Vs, low, high, x);
        return sums;
    }
};

void init(vector<int>&);
void print(vector<int>);
int main()
{
    srand(time(0));
    vector<int>Vs;
    init(Vs);
    print(Vs);
    int x;
    cout <<"enter the sum number:";
    cin >> x;
    pair_sum_ p;
    auto pair = p.find_X_sum(Vs,x);
    cout << "sum find at index:" << pair.first <<" "<<pair.second <<endl;
}

void init(vector<int>& v)
{
    for(int i=0; i<20;i++)
    {
        v.push_back(rand()%15);
    }
}
void print(vector<int>v)
{
    for(vector<int>::iterator itr=v.begin(); itr!=v.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout <<endl;
}

