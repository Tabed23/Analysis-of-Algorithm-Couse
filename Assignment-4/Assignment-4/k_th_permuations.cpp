#include <iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;

void printAllKLengthRec(array<char,3>, string prefix,int n, int k);
void printAllKLength(array<char,3>, int k, int n);
int main()
{

	array<char,3>set1 = { 'a', 'b' , 'c'};
	int k = 4;
	printAllKLength(set1, k, 3);
}

void printAllKLengthRec(array<char,3>set ,string prefix,int n, int k)
{
	if (k == 0)
	{
			cout << (prefix) << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		string newPrefix;

		newPrefix = prefix + set[i];
		printAllKLengthRec(set, newPrefix, n, k - 1);
	}

}

void printAllKLength(array<char,3>set, int k, int n)
{
	printAllKLengthRec(set, "", n, k);
}