#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>, int , int );
void print(vector<int>);
int main()
{
 
    int target;
    vector<int>v {1, 2, 3,4,5,6,7,8,9,10};
    print(v);
    cout<<"enter the value you want to find:";
    cin >> target;
    auto start =  time(0);
    cout <<"you Target is at index :" << BinarySearch(v, v.size(), target)<< endl;
    auto end = time(0);
    cout << " time taking in iterative:"<< end -start<< "sec" <<endl;
    return 0;
}


int BinarySearch(vector<int> A, int size, int T)
{
    int start = 0, end = size-1, mid;
    while(start<= end)
    {
         mid = start+(end - start)/ 2;
        if (A[mid] ==  T)
        {
            return mid;
        }
        if(A[mid] < T)
        {
            start =  mid +1;
        }
        else
        {
            end = mid -1;
        }
       
    }
    return -1;
}
void print(vector<int>v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout <<v[i] <<",";
    }
    cout <<endl;
}