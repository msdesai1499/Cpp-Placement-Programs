#include <bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int val)
	{
		data = val;
		next = NULL;
	}
} *head = NULL;

void insertAtTail(int val)
{
	node *temp = new node(val);
	node *curr = NULL;

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
	}
}

void insertAtHead(int data)
{

	node *temp = new node(data);
	node *curr = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{

		curr = temp;
		curr->next = head;
		head = curr;
	}
}

void display()
{
	node *curr;
	curr = head;

	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}

int main()
{

	int ch;

	do
	{
		cout << "Press 1- insert  2 - display 3-insert at head 0- exit";
		cin >> ch;
		int data;
		switch (ch)
		{
		case 1:

			cin >> data;
			insertAtTail(data);
			break;
		case 2:
			display();
			break;
		case 3:

			cin >> data;
			insertAtHead(data);
			break;
		default:
			break;
		}
		cout << "Do you want to continue press 1";
		cin >> ch;

	} while (ch == 1);

	return 0;
}