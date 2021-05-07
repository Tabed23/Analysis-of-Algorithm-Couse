#include <iostream>
#include<string>
#include<array>
#include<set>
#include<algorithm>
using namespace std;

void printAllKLengthRec(array<char,3>, string prefix,int n, int k);
void printAllKLength(array<char,3>, int n);
bool isunique(string s);
int main()
{

	array<char,3>set1 = { 'a', 'b' , 'c'};
	printAllKLength(set1, set1.size());
}

void printAllKLengthRec(array<char,3>set ,string prefix,int low, int size)
{
	if (low == size)
	{
        if(!isunique(prefix))
        {
            cout << (prefix) << endl;
		    return;
        }
        return;
	}
	for (int i = 0; i < size; i++)
	{
		string newPrefix;

		newPrefix = prefix + set[i];
		printAllKLengthRec(set, newPrefix, low+1,size);
	}

}

void printAllKLength(array<char,3>set, int n)
{
	printAllKLengthRec(set, "", 0, n);
}
bool isunique(string s)
{
    set<char>str(s.begin(), s.end());
    return str.size() != s.size()? true :false;
}
