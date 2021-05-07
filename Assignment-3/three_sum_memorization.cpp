#include<iostream>

#include<vector>

int Tri_sum__MamoriaztionHelper(std::vector<int>&v, int n)
{ 
    if(v[n]!=-1)
        return v[n];
    if(n ==0 || n ==1)
        return v[n] = n;
    return v[n] = Tri_sum__MamoriaztionHelper(v,n-1) + Tri_sum__MamoriaztionHelper(v,n-2) + Tri_sum__MamoriaztionHelper(v,n-3);
}

int Tri_sum_Mamoriation(int n)
{
    std::vector<int>v(n+1 ,{-1});

    return Tri_sum__MamoriaztionHelper(v, n);
}

int main()
{
    std::cout << "30 th  Tri Sum :="<< Tri_sum_Mamoriation(30)<<std::endl;
}