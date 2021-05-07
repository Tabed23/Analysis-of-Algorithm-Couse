#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(int* , int , int );
void print(vector<int>);
bool Bubleup(vector<int>&, int);
void Sort(vector<int>&);
void init(vector<int>&v)
{
    for(int i=0;i<=15; i++)
    {
       v.push_back(rand()%20);
    }
}

int main()
{
    srand(time(0));
    int target;
    vector<int>v;
    init(v);
    print(v);
    cout<<"enter the value you want to find:";
    cin >> target;
    cout <<"sorting array\n";
    auto start =  time(0);
    Sort(v);
    cout <<"you Target is at index :" << BinarySearch(v, target)<< endl;
    auto end = time(0);
    cout << " time taken:"<< end -start<< "sec" <<endl;
    return 0;
}


int BinarySearch(vector<int>v, int T)
{
    int start = 0, end = v.size()-1, mid;
    while(start<= end)
    {
         mid = start+(end - start)/ 2;
        if (v[mid] ==  T)
        {
            return mid;
        }
        if(v[mid] < T)
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

bool Bubleup(vector<int>&v,int Size)
{
	bool Happen = false;
	for (int i = 0; i < Size; i++)
	{
		if (v[i] > v[i + 1])
		{
			swap(v[i], v[i + 1]);
			Happen = true;
		}
	}
	return Happen;
}
void Sort(vector<int>&v)
{
	while (Bubleup(v, v.size()-1));
}
void print(vector<int>v)
{
    for(int i=0;i<v.size(); i++)
    {
        cout <<v[i] <<",";
    }
    cout <<endl;
}
