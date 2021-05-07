#include <iostream>

using namespace std;
void print(int *A,int s);
void TheLargestContiguousSumArrayAnchoredFromLeftToRight(int *, int &, int, int ,int &, int &);
void TheLargestContiguousSumArrayAnchoredFromRightToLeft(int *, int &, int, int,int &, int &);
int main()
{
    int sum,msi,mei;
   int Array[16] = {13,-3,-25,20,-3,-6,-23,18,20,-7,12,-5,-22,15,-4,7};
    int size = 16;
    print(Array,size);
    TheLargestContiguousSumArrayAnchoredFromLeftToRight(Array,sum,0,7,msi,mei);
    cout <<"Max Anchored From Left To Right from 0 to 7  Total sum=>"<< sum << "  Max starting index=>" << msi <<" Max ending index=>"<< mei<<endl;
    TheLargestContiguousSumArrayAnchoredFromRightToLeft(Array, sum, 5, 15, msi,mei);
    cout <<"Max Anchored From Right To Left from 5 to 15  Total sum=>"<< sum << "  Max starting index=>" << msi <<" Max ending index=>"<< mei<<endl;

    return 0;
}
void print(int *A,int s)
{
    for(int i=0; i<s;i++)
    {
        cout << A[i] << " ";
    }
    cout <<endl;
}
void TheLargestContiguousSumArrayAnchoredFromLeftToRight(int *A, int & Sum, int L, int R,int &msi, int &mei)
{
    int Max = A[L],CurrentMax = A[L];
    msi = L;mei = L;
    for(int i=L+1; i<=R; i++)
    {
        CurrentMax = A[i];
        if(CurrentMax > Max)
        {
            Max = CurrentMax;
            mei= i;
        }
    }
    Sum = Max;
}
void TheLargestContiguousSumArrayAnchoredFromRightToLeft(int *A, int & Sum, int L, int R,int &msi, int &mei)
{
    int Max = A[R],CurrentMax= A[R];
    msi = R, mei =R;
    for(int i=R; i>=L; i--)
    {
        CurrentMax = A[i];
        if(CurrentMax > Max)
        {
            Max = CurrentMax;
            mei = i;
        }
    }
    Sum = Max;
}
