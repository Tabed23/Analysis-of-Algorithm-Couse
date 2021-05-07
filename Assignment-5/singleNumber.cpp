#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
class Soultion{
    public:
    int singleNumber(vector<int>numbers)
    {
        map<int, int> counts;
        for(int i=0; i<numbers.size();i++)
        {
            counts[numbers[i]]++;
        }
          for(auto x : counts)
          {
              if(x.second ==1)
              {
                  return x.first;
              }
          }
          return -1;
    }
};


int main()
{
    Soultion *s = new Soultion[2];
   cout << "single number is:=" <<s[0].singleNumber(vector<int>{2,2,1}) <<endl;
   cout << "single number is:=" <<s[1].singleNumber(vector<int>{4,1,2,1,2}) <<endl;
}
