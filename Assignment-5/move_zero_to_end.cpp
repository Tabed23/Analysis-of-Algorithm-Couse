#include<iostream>
#include<vector>
using namespace std;

class move_zeros_to_end
{
public:
   vector<int>move_zeros(vector<int>v)
   {
       int count_zeros= 0;
       int si=0;
       while (si <v.size())
       {
           if(v[si]!=0)
           {
              v[count_zeros++] = v[si];
           }
           si++;
       }
       while (count_zeros < v.size())
       {
           v[count_zeros] = 0;
           count_zeros++;
       }
       return v;

   }
};
void print(vector<int>);
int main()
{
    vector<int>Vs ={0,1,0,3,12};
    print(Vs);
    move_zeros_to_end end_zero;
    print(end_zero.move_zeros(Vs));
}

void print(vector<int>v)
{
    for(auto x : v)
    {
        cout << x << " ";
    }
    cout <<endl;
}
