#include<iostream>
using namespace std;
int fast_power(int x, int n)
{
	if (n == 0)
		return 1;
	auto iseven = [](int n)->bool{return n % 2 == 0; };
	if (iseven(n))
	{
		int y = fast_power(x, n / 2);
		return y *y;
	}
	else
		return x * fast_power(x, n - 1);

}
int main()
{
	cout << fast_power(2, 5) << endl;
	return 0;
}