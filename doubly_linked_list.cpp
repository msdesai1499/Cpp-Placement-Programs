#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node *prev;

	Node(int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};

void insertAtTail(Node *&head, int val)
{
	Node *temp = new Node(val);
	Node *curr;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = temp;
		temp->prev = curr;
	}
}

void display(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		/* code */
		cout << curr->data << " ";
		curr = curr->next;
	}
}
int main()
{
	int ch;

	do
	{
		cout << "Press 1- insert  2 - display 3-insert at head 4- delete 0- exit";
		cin >> ch;
		int data;
		Node *head = NULL;
		switch (ch)
		{
		case 1:

			cin >> data;
			insertAtTail(head, data);
			break;
		case 2:
			display(head);
			break;

		default:
			break;
		}
		cout << "Do you want to continue press 1";
		cin >> ch;

	} while (ch == 1);

	return 0;
}