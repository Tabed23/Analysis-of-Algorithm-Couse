#include <iostream>
#include"Stack.h"
using namespace std;

int main()
{
    Stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.print();
    if (S.Search(2))
        cout << "Found...!!!" << endl;
        S.pop();
		S.pop();
		S.pop();
		if (S.isEmpty())
			cout << " stack is empty..!!" << endl;
        else
            cout << "stack is not empty"<<endl;
    return 0;
}
