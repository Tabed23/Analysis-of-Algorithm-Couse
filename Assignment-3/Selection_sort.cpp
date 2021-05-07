#include<iostream>
#include<vector>
using namespace std;
void init(vector<int>&);
void print(vector<int>);
void Swap(int&, int &);
void selection_sort(vector<int>&ptr, int start, int size);
int main()
{
	vector<int>v;
	init(v);
	print(v);
	cout << "\nafter sorting\n";
	selection_sort(v,0, v.size());
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
void selection_sort(vector<int>&ptr, int start, int size)
{
	if (start >= size - 1)
		return;
	int min = start;
	for (int i = start; i < size; i++)
	{
		if (ptr[i] < ptr[min])
		{
			min = i;
		}
	}
	Swap(ptr[start], ptr[min]);
	return selection_sort(ptr, start + 1, size);
}