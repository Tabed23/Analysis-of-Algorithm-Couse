#include<iostream>
#include<vector>
#include<chrono>
using namespace std;



int Ramdomized_Select(vector<int>&,int , int, int);
int Ramdomized_Partition(vector<int>&,int,int);
int k_th_Smallest_element(vector<int>&, int ,int,int);
void init(vector<int>&v);
void print(vector<int>&v);
int main()
{
    vector<int>vs;
    init(vs);
    print(vs);  
    auto s = chrono::high_resolution_clock::now();
    cout << "K_th Smallest Element is:= "<<k_th_Smallest_element(vs,0,vs.size(), 50)<<endl;
    auto e = chrono::high_resolution_clock::now();
    chrono::duration<float>dur = e - s;
  cout <<dur.count() << " seconds "<<endl;
}

void init(vector<int>&v)
{
    for(int i=0; i<1000; i++)
    {
        v.push_back(rand()%1000);
    }
}

void print(vector<int>&v)
{
    for(auto x : v)
    {
        cout << x <<  " ";
    }

    cout <<endl<<endl<<endl;
}

int Ramdomized_Select(vector<int>&v, int p , int r)
{
    int pivot;
    pivot = p + rand()%(r -p+1);
    swap(v[r], v[pivot]);
   return Ramdomized_Partition(v,p, r);
}
int Ramdomized_Partition(vector<int> &v,int p,int r)
{
    int index =p, pivot=r;
    for(int i= p; i<r; i++)
    {
        if(v[i]<v[pivot])
        {
            swap(v[i], v[index]);
            index++;
        }

    }
    swap(v[pivot], v[index]);
    return index;

}

int k_th_Smallest_element(vector<int>&v, int low ,int high,int k)
{
    if(low< high)
    {
        auto pivot = Ramdomized_Select(v, low, high);
        if(pivot == k)
        {
            return v[pivot];
        }
        if(pivot>k)
        {
             k_th_Smallest_element(v,low, pivot-1,k);
        }
        else
        {
             k_th_Smallest_element(v, pivot+1, high, k);    
        }
        
    }

}