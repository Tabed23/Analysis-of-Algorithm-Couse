#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node * next;
};
template<typename TM>
class _list
{
private:
	Node * head;
	Node * tail;
public:
	_list()
	{
		head = NULL;
		tail = NULL;
	}
	void append(TM element)
	{
		Node* temp = new Node;
		temp->data = element;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	
	Node * get_head()
	{
		return(empty() ? NULL : head);
	}
	bool empty()
	{
		return head == NULL;
	}

	void print()
	{
		Node * current = new Node;
		current = head;
		while (current != NULL)
		{
			cout << current->data;
			if (current->next == NULL)
			{
				break;
			}
			cout << "->";
			current = current->next;
		}
		cout << endl;
	}
};

Node *Mergerlist(Node *list1, Node *list2)
{

	Node * mergedlist = NULL;
	mergedlist = list1;
	if (list1 == NULL)
	{
		return list2;
	}
	if (list2 == NULL)
	{
		return list1;
	}
	if (list1 == NULL && list2 == NULL)
	{
		cout << "What the fuck  do you want to concantinate stupid!";
		return NULL;
	}
	while (mergedlist->next != NULL)
	{
		mergedlist = mergedlist->next;
	}
	mergedlist->next = list2; 
    return list1;
}
void print(Node * head)
{
    Node * current = new Node;
		current = head;
		while (current != NULL)
		{
			cout << current->data;
			if (current->next == NULL)
			{
				break;
			}
			cout << "->";
			current = current->next;
		}
		cout << endl;
}
int main()
{
    _list<int>l1;
    _list<int>l2;
    l1.append(1);
    l1.append(2);
    l1.append(3);
    l2.append(4);
    l2.append(5);
    l2.append(6);
    l2.append(7);
    cout <<"list 1 :";
    l1.print();
    cout << "list 2 :";
    l2.print();
    auto  mergelist = Mergerlist(l1.get_head(), l2.get_head());
    print(mergelist);
}