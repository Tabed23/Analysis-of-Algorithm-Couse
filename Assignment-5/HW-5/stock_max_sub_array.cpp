#include<iostream>
#include<vector>
using namespace std;
class Soultion
{
    int MaxSum;
    int MaxStart,MaxEnd;
    int CurrentSum;
    int sums(vector<int>v,int si,int ei)
    {
        int sum = 0;
        for(int i=si; i<ei; i++)
        {
            sum+=v[i];
        }
        return sum;
    }
    vector<int> Add_value(vector<int>&v,int si,int ei)
    {
        vector<int>subarray;
        for(int i=si; i<=ei; i++)
        {
            subarray.push_back(v[i]);
        }
        return subarray;
    }

public:
    vector<int>O_of_N_cube(vector<int>&vs)
    {
        this->MaxSum= vs[0];
        this-> MaxStart=0,this->MaxEnd =0;
        for(int si=0;si<vs.size(); si++)
        {
            for(int ei=si; ei<vs.size();ei++)
            {
                this->CurrentSum = sums(vs,si,ei);
                if(this->CurrentSum >this->MaxSum)
                {
                    this->MaxSum = this->CurrentSum;
                    this->MaxStart = si;
                    this->MaxEnd = ei;
                }

            }
        }

        return Add_value(vs,this->MaxStart, this->MaxEnd);
    }
    vector<int>O_of_N_suquare(vector<int>&vs)
    {

        this->MaxSum= vs[0];
        this-> MaxStart=0,this->MaxEnd =0;
        for(int si=0;si<vs.size(); si++)
        {
            this->CurrentSum = 0;
            for(int ei=si; ei<vs.size();ei++)
            {
                this->CurrentSum += vs[ei];
                if(this->CurrentSum >this->MaxSum)
                {
                    this->MaxSum = this->CurrentSum;
                    this->MaxStart = si;
                    this->MaxEnd = ei;
                }

            }
        }

        return Add_value(vs,this->MaxStart, this->MaxEnd);
    }
    vector<int>N_log_N(vector<int>v)
    {
        
    }

};
void print(vector<int>&v);
int main()
{
    Soultion *s = new Soultion;
    vector<int>Vs={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,16,-4,7};
    print(Vs);
    auto Max_sub_O_of_N_cube = s->O_of_N_cube(Vs);
    auto Max_sub_O_of_N_square = s->O_of_N_suquare(Vs);
    auto Max_sub_O_of_N_log_N = s->N_log_N(Vs);
    cout<<"O(N^3) result: ";
    print(Max_sub_O_of_N_cube);

    cout << "O(N^2) result: ";
    print(Max_sub_O_of_N_square);
    cout << "O(N log N) result : ";
    print(Max_sub_O_of_N_log_N);

}
void print(vector<int>&v)
{
    for(auto x:v)
    {
        cout << x << " ";
    }
    cout <<endl;
}