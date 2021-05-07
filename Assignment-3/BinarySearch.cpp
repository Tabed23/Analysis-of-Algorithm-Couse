#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void init(vector<int>&s);
void print(vector<int>s);
int binary_search(vector<int> ptr, int start, int end, int var);
int Binary_Search_recursive(vector<int>&s ,int T);
int main()
{
	vector<int>s;
	init(s);
	sort(s.begin(), s.end());
	print(s);
	int T;
	cout <<" \nenter a numebr you want to  find:";
	cin >>T;
	cout << "found at index ="<< Binary_Search_recursive(s,T)<<endl;
	return 0;
}
void init(vector<int>&s)
{
	for(int i=0; i<=1000;i++)
	{
		s.push_back(rand()%1000+1);
	}
}
void print(vector<int>s)
{
	cout <<"{";	
	for(auto set : s)
	{
		cout << set <<" ,";
	}
	cout <<"}";
}
int binary_search(vector<int>ptr, int start, int end, int var)
{
	int mid = (start + end-1) / 2;
	if (start >= end)
		return 0;
	if (ptr[mid] == var)
		return mid;
	if (ptr[mid] > var)
		return binary_search(ptr, start, mid - 1, var);
}
int Binary_Search_recursive(vector<int>&s ,int T)
{
	return binary_search(s, 0, s.size(), T);
}