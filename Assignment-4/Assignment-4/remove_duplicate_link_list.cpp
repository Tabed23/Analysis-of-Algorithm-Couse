#include<iostream>
#include<algorithm>
#include<list>
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
void RemoveDuplicate(Node *);
int main()
{
    _list<int>l;
    l.append(5);
    l.append(3);
    l.append(4);
    l.append(2);
    l.append(5);
    l.append(4);
    l.append(1);
    l.append(3);
    l.print();
    RemoveDuplicate(l.get_head());
    l.print();
}
void RemoveDuplicate(Node *head)
{
    Node * previous = NULL;
    Node * current = head; // get the head 
    Node *duplicate = nullptr;
    while (current !=NULL && current->next != NULL)
    {
        previous = current;
        while(previous->next != NULL)
        {
            if(current->data ==  previous->next->data)
            {
                duplicate = previous->next;
                previous->next = previous->next->next;
                free(duplicate);
            }
            else
            {
                previous = previous->next;
            }
        }
        current = current->next;
    }
    

}