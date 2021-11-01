#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
} *head = NULL;

void insertAtTail(int data)
{

	Node *temp = new Node(data);
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
	}
}

void display()
{

	Node *curr;

	curr = head;
	while (curr != NULL)
	{

		cout << curr->data << " ";
		curr = curr->next;
	}
}

void reverse()
{

	Node *curr = head;
	Node *prev = NULL;
	Node *nextptr;

	while (curr != NULL)
	{

		nextptr = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextptr;
	}

	head = prev;
}

Node *reversek(Node *&head, int k)
{

	Node *prevptr = NULL;
	Node *currptr = head;
	Node *nextptr;

	int count = 0;
	while (currptr != NULL && count < k)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
		count++;
	}
	if (nextptr != NULL)
	{

		head->next = reversek(nextptr, k);
	}
	return prevptr;
}

int main()
{

	int ch;

	do
	{
		cout << "Press 1- insert  2- display 3-reverse 0- exit";
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

			reverse();
			break;

		default:
			break;
		}
		cout << "Do you want to continue press 1";
		cin >> ch;

	} while (ch == 1);

	return 0;
}