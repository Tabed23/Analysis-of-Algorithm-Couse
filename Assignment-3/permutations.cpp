#include<iostream>
#include<string>
using namespace std;
int counter = 1;
void recursive_permutations(string & str, int s);
void print_permutations(string  & str);
int main()
{
	string str="ABC";
	print_permutations(str);
	system("pause");
	return 0;
}
void recursive_permutations(string & str, int s)
{
	if (s == str.length())
	{
		cout << counter++ << "." << str << endl;
	}
	for (int i = s; i < str.length(); i++)
	{
		swap(str[s], str[i]);
		recursive_permutations(str, s + 1);
		swap(str[s], str[i]);
	}
}
void print_permutations(string  & str)
{
	recursive_permutations(str, 0);
}