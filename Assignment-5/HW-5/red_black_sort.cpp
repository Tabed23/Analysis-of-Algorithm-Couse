#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<list>
using namespace std;


class Soultion
{

    void sort(map<int,list<int>>&Maps, vector<int>&Vs)
    {
        for(auto itr =Maps.begin(); itr!=Maps.end(); itr++)
        {
            for(auto val= itr->second.begin(); val!=itr->second.end(); val++)
            {
                Vs.push_back(*val);
            }
        }
    }
public:
    void RedBlackSort(vector<int>&vs)
    {
        map<int,list<int>> Maps;
        for(int i=0; i<vs.size();i++)
        {
            Maps[vs[i]].insert(Maps[vs[i]].end(), vs[i]);
        }
        vs.clear();
        sort(Maps,vs);
    }
    void print(vector<int>&v)
    {
        for(auto x:v)
        {
            cout << x << " ";
        }
        cout <<endl;
    }
    void init(vector<int>&vs, int range)
    {
        for(int i=0; i<=range;i++)
        {
            vs.push_back(rand()%range+2);
        }
    }
};

int main()
{
    srand(time(NULL));
    vector<int>vs;
    Soultion*s = new Soultion;
    s->init(vs, 15);
    s->print(vs);
    s->RedBlackSort(vs);
    s->print(vs);

}