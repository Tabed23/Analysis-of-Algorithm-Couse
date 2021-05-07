#include<iostream>
#include<vector>
#include<time.h>
#include<chrono>
using namespace std;
void init(vector<int>&);
void Print(vector<int>&v);
void Swap(int&, int &);
int Pertition(vector<int>&, int&, int&);
void QuickSort(vector<int>&, int ,int);
int main()
{
    srand(time(0));
	vector<int>v;
	init(v);
	Print(v);
	cout << "\nafter sorting\n";
    auto s = chrono::high_resolution_clock::now();
	QuickSort(v, 0, v.size());
    auto e = chrono::high_resolution_clock::now();
    chrono::duration<float>dur = e - s;
	Print(v);
    cout <<dur.count() << " seconds "<<endl;
	return 0;
}
void init(vector<int>&v)
{
	for(int i=0; i<1000; i++)
    {
        v.push_back(rand()%5000);
    }
}
void Print(vector<int>&v)
{
	for(auto x : v)
        cout << x<<" ";
    cout <<endl;
}
void Swap(int& A, int & B)
{
	int C = A;
	A = B;
	B = C;
}
int Pertition(vector<int>& ptr, int& low, int& high)
{
	int pivot = rand()%high;
	int i = (low - 1);
	for (int index = low; index < high; index++)
	{
		if (ptr[index] <= pivot)
		{
			i++;
			Swap(ptr[i], ptr[index]);
		}
	}
	Swap(ptr[i + 1], ptr[high]);
	return (i + 1);
}
void QuickSort(vector<int>&v,int low , int Size)
{
	if (low < Size)
	{
		int pi = Pertition(v, low, Size);
		QuickSort(v, low, pi - 1);
		QuickSort(v, pi + 1, Size);
	}

}