#include<iostream>
using namespace std;
int tri_sum(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2 || n == 3)
	{
		return 1;
	}
	return tri_sum(n - 1) + tri_sum(n - 2) + tri_sum(n - 3);

}

int main()
{
	int n;
	cout << "Enter A nth number:";
	cin >> n;
	cout << "The nth term of tri sum series is->" << tri_sum(n) << endl;
	return 0;
}