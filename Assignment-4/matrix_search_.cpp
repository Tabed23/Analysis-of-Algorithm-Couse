#include<iostream>
#include<fstream>
#include<vector>
using namespace std;



void reader(vector<vector<int>>&,int&,int&);
void print(vector<vector<int>>&,int);
void SearchMatrix(vector<vector<int>>&,int&,int&);
int BinarySearch(vector<int>, int , int);
int main()
{
    vector<vector<int>>Matrix;
    int T,N;
    reader(Matrix,N,T);
    print(Matrix,N);
    SearchMatrix(Matrix,N,T);
    return 0;
}

void reader(vector<vector<int>>&v,int& n,int& t)
{
        ifstream rdr("searchmat.txt");
        if(!rdr)
        {
            cout <<"file not found...!!\n";
            exit(1);
        }
        rdr >> n >> t;
        int var;
        for(int i=0;i<n ;i++)
        {
            vector<int>temp;
            for(int j=0; j<n;j++)
            {
                rdr >> var;
                temp.push_back(var);
            }
            v.push_back(temp);
        }

}
void print(vector<vector<int>>&Maps,int N)
{
	for (int ri = 0; ri <N; ri++)
	{
		for (int ci = 0; ci < N; ci++)
		{
			cout << Maps[ri][ci]<<" ";
		}
		cout << endl;
	}
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
void SearchMatrix(vector<vector<int>>&Map,int& N,int& T)
{
    for(int i=0; i<=N;i++)
    {
        if(auto res = BinarySearch(Map[i], Map[i].size(), T)>=0)
        {
            cout << "target has found at coloum :" << i << " row :" << res << endl;
            return;
        }
    }
}