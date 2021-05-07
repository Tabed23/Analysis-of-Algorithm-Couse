#ifndef STACK_H
#define STACK_H

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
template<typename TM>
class Stack
{
private:
	vector<TM> data;
	int size;
	int top;
public:
	Stack()
	{
		size = 0;
		top = -1;
	}
	~Stack()
	{

		data.erase(data.begin(), data.end());
		cout <<"Distructor has been called....!!"<<endl;
	}
	void push(TM element)
	{
		top++;
		data.push_back(element);
	}
	void pop()
	{
		data.pop_back();
		top--;
	}
	bool isEmpty()
	{
		return top == -1;
	}
	bool Search(TM element)
	{
		for (int i = 0; i < top; i++)
		{
			if (data[i] == element)
				return true;
		}
		return false;
	}
	TM top()const
	{
        return data[top];
	}
	void print()
	{
		for (auto itr : data)
		{
            cout <<"---"<<endl;
			cout << "|"<<itr<<"|"<<endl;
			cout <<"---"<<endl;
		}
	}
};
#endif // STACK_H
