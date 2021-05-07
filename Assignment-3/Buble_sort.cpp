#include<iostream>
#include<vector>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
void Swap(int&, int &);
void BubleSort(vector<int>&ptr, int size);
int main()
{
	vector<int>v;
	init(v);
	print(v);
	cout << "\nafter sorting\n";
	BubleSort(v, v.size());
	print(v);
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
	cout <<endl;
}
void Swap(int& A, int & B)
{
	int C = A;
	A = B;
	B = C;
}
void BubleSort(vector<int>& ptr, int size)
{
	if (size == 0)
		return;
	for (int i = 0; i < size - 1; i++)
	{
		if (ptr[i] > ptr[i + 1])
			Swap(ptr[i], ptr[i + 1]);
	}
	return BubleSort(ptr, size - 1);
}