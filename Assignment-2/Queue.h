#include<iostream>
#include<stack>
using namespace std;
template<typename elemtype>
class Queue
{
private:
	stack<elemtype>Stack, S;
	int Size;
public:
	Queue(int s)
	{
		Size = s;
	}

	~Queue()
	{
		
	}
	void EnQueue(elemtype element)
	{
		while (!Stack.empty())
		{
			S.push(Stack.top());
			Stack.pop();
		}
		Stack.push(element);
		while (!S.empty())
		{
			Stack.push(S.top());
			S.pop();
		}
	}
	void DeQueue()
	{
		if (Stack.empty())
		{
			cout << "Queue is Empty\n";
			exit(1);
		}
		
		Stack.pop();
	}
	bool isempty()
	{
		if (Stack.empty())
			return true;
		return false;
	}
	bool isfull()
	{
		if (Stack.size == Size)
			return true;
		return false;
	}
	
	void print()
	{
		while (!Stack.empty())
		{
			cout << Stack.top() << endl;
			Stack.pop();
		}
	}
};
