#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>, int , int, int);
void print(vector<int>);
int main()
{
    int target;
    vector<int>v {1, 2, 3,4,5,6,7,8,9,10};
    print(v);
    cout<<"enter the value you want to find:";
    cin >> target;
    auto start =  time(0);
    cout <<"you Target is at index :" << BinarySearch(v, 0,v.size() ,target)<< endl;
    auto end = time(0);
    cout << " time taking in recursive :"<<  end -start<< "sec" <<endl;
    return 0;
}

int BinarySearch(vector<int>ptr, int start, int end, int T)
{
	int mid = start +(end - start) / 2;
	if (start >= end)
		return 0;
	if (ptr[mid] == T)
		return mid;
	if (ptr[mid] > T)
		return BinarySearch(ptr, start, mid - 1, T);
	else
		return BinarySearch(ptr, mid + 1, end, T);
}

void print(vector<int>v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout <<v[i] <<",";
    }
    cout <<endl;
}