#include<iostream>
#include<iomanip>
using namespace std;
int multiply(int A, int B)
{
	if (B == 0)
	{
		return 0;
	}
	int RES = A; int COUNT = 1;
	while (COUNT + COUNT <= B)
	{
		RES += RES;
		COUNT += COUNT;
	}
	return RES + multiply(A, B - COUNT);
}
int  main()
{
	int num;
	int multi;
	cout << " ENTER A NUMBER AND ITS MULTIPLAYER";
	cin >> num >> multi;
	cout << setw(5) << " result:"<< multiply(num, multi) << endl;
	system("pause");
	return 0;
}
