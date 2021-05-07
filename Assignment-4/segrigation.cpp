#include <iostream>
#include<vector>
#include<time.h>
using namespace std;
void init_zero_and_ones(vector<int>&);
void init(vector<int>&);
void print(vector<int>);
void quiz_part_one_segrigation_by_T_value_helper(vector<int>&,int *&, int *&, int);
void quiz_part_one_segrigation_by_T_value(vector<int>&, int);
void quiz_part_tow_segrigation_by_zero_and_ones(vector<int>&);
void quiz_part_tow_segrigation_by_zero_and_ones_healper(vector<int>&,int *&,int *&);
void quiz_part_three_segrigation_with_range(vector<int>&,int,int,int);
void quiz_part_three_segrigation_with_range_helper(vector<int>&,int *&,int*&,int);
void quiz_part_five_segrigation_with_even_odd(vector<int>&);
void quiz_part_five_segrigation_with_even_odd_helper(vector<int>&,int *&,int *&);
int main()
{
    srand(time(0));
    vector<int>v,v1,v2,v3;
    init(v);
    init_zero_and_ones(v1);
    cout << "segrigation with T value"<<endl;
    print(v);
    quiz_part_one_segrigation_by_T_value(v, 11);
    cout << "ans:\t";
    print(v);

    cout <<"\n \n segrigation with zero & one's"<<endl;
    print(v1);
    quiz_part_tow_segrigation_by_zero_and_ones(v1);
    cout << "ans:\t";print(v1);

    cout << "segriagtion with range "<<endl;
    int start,end;
    init(v2);
    print(v2);
    cout <<"enter range start and end:";
    cin >>start >> end;
    if(start <0 || end > v2.size())
    {
        cout << "invalid input"<<endl;
    }
    quiz_part_three_segrigation_with_range(v2,start,end,13);
    cout <<"ans: \t"; print(v2);


    cout <<"\n\n segriation with even odd"<<endl;
    init(v3);
    print(v3);
    quiz_part_five_segrigation_with_even_odd(v3);
    cout <<"ans:\t";print(v3);
    return 0;
}
void init(vector<int>&v)
{
    for(int i=0; i<=20;i++)
    {
        v.push_back(rand()%20);
    }
}
void init_zero_and_ones(vector<int>&v)
{
    for(int i=0; i<15; i++)
    {
        v.push_back(rand()% (0 + 2));
    }
}
void print(vector<int>v)
{
    for(auto val : v)
    {
        cout << val << " ,";
    }
    cout <<endl;
}
// segrigation with T value
void quiz_part_one_segrigation_by_T_value_helper(vector<int>&v,int *&si, int *&ei, int T)
{
    do
    {
        while(*si<*ei && v[*si]<T)
        {
            *si+=1;
        }
        while(*ei >*si && v[*ei]  > T)
        {
            *ei-=1;
        }
        if(*si <*ei)
        {
            swap(v[*si], v[*ei]);
            if(v[*si] == v[*ei])
                *ei-=1;
        }

    }
    while(*si < *ei);

}
//segrigation with T value
void quiz_part_one_segrigation_by_T_value(vector<int>&v, int T)
{
    int *si=new int,*ei =new int;
    *si = 0, *ei=v.size();
    quiz_part_one_segrigation_by_T_value_helper(v, si, ei, T);

}
// segrigation_by_zero_and_ones
void quiz_part_tow_segrigation_by_zero_and_ones(vector<int>&v)
{
    int *si=new int , *ei = new int;
    *si = 0, *ei=v.size();
    quiz_part_tow_segrigation_by_zero_and_ones_healper(v,si,ei);
}
 //segrigation_by_zero_and_ones
void quiz_part_tow_segrigation_by_zero_and_ones_healper(vector<int>&v,int *&si,int *&ei)
{
    do
    {
        while(*si<*ei && v[*si] == 0)
        {
               *si+=1;
        }

        while(*ei>*si && v[*ei] ==  1)
        {
            *ei-=1;
        }

        if(*si<*ei)
        {
            swap(v[*si],v[*ei]);
        }
    }
    while(*si<*ei);
}



//segrigation_with_range
void quiz_part_three_segrigation_with_range(vector<int>&v,int start,int end,int T)
{
    int *si = new int, *ei =  new int;
    *si = start, *ei = end;
    quiz_part_three_segrigation_with_range_helper(v, si,ei,T);
}
void quiz_part_three_segrigation_with_range_helper(vector<int>&v,int *&si,int*&ei,int T)
{
  do
    {
        while(*si<*ei && v[*si]<T)
        {
            *si+=1;
        }
        while(*ei >*si && v[*ei]  > T)
        {
            *ei-=1;
        }
        if(*si <*ei)
        {
            swap(v[*si], v[*ei]);
            if(v[*si] == v[*ei])
                *ei-=1;
        }

    }
    while(*si < *ei);
}




//segrigation_with_even_odd_
void quiz_part_five_segrigation_with_even_odd(vector<int>&v)
{
    int *si = new int, *ei =  new int;
    *si = 0, *ei = v.size();
    quiz_part_five_segrigation_with_even_odd_helper(v,si,ei);
}
// segrigation_with_even_odd_
void quiz_part_five_segrigation_with_even_odd_helper(vector<int>&v,int *&si,int *&ei)
{
do
    {
        while(*si<*ei && v[*si]%2 == 0)
        {
            *si+=1;
        }
        while(*ei >*si && v[*ei] %2!=0)
        {
            *ei-=1;
        }
        if(*si <*ei)
        {
            swap(v[*si], v[*ei]);
            if(v[*si] == v[*ei])
                *ei-=1;
        }

    }
    while(*si < *ei);
}
















