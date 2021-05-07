#include<iostream>
using namespace std;
void movedisk(int count, int n1, int n2, int n3)
{
	if (count > 0)
	{
		movedisk(count - 1, n1, n2, n3);
		cout << "Move disk " << count << " from " << n1
			<< " to " << n3 << "." << endl;
		movedisk(count - 1, n2, n3, n1);
	}
}


int main()
{
	movedisk(4, 1, 2, 3);
	system("pause");
}