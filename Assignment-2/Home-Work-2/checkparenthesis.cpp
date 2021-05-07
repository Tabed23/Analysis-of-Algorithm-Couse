#include<stack>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
auto Is_opening = [](char n)->bool { return n == '(' || n == '[' || n== '{'; };
auto Is_cloasing = [](char n)->bool { return  n == ')' || n == ']' || n == '}'; };
auto Are_pair = [](char op, char cl)->bool {
	if (op == '(' && cl == ')')
		return true;
	if (op == '[' && cl == ']')
		return true;
	if (op == '{' && cl == '}')
		return true;
};

bool Is_Balanced(string bracket);
int main()
{
	std::string bracket = "([(Y))";
	if (Is_Balanced(bracket))
	{
		cout << "are Balanced";
	}
	else
	{
		cout << " are not Balanced";
	}
	return 0;
}
bool Is_Balanced(string bracket)
{
	stack<char>s;
	for (int i = 0; i < bracket.length(); i++)
	{
		if (Is_opening(bracket[i]))
		{
			s.push(bracket[i]);
		}
		else if (Is_cloasing(bracket[i]))
		{
			if (s.empty() || !Are_pair(s.top(), bracket[i]))
			{
				return false;
			}
			else
			{
				s.pop();
			}
		}
	}
	if (s.empty())
		return true;
	return false;
}

