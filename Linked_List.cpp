#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
	int data;
	Node *next;
} *head = NULL;

void create(int d)
{

	Node *curr, *temp;
	temp = new Node();
	temp->data = d;
	temp->next = NULL;
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
	if (head == NULL)
	{
		cout << "No record Inserted";
	}
	else
	{
		curr = head;
		while (curr != NULL)
		{
			cout << curr->data << " ";
			curr = curr->next;
		}
	}
}

void ins_begin(int d)
{

	Node *curr, *temp;
	temp = new Node();
	temp->data = d;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
}

void ins_mid(int d, int p)
{
	Node *curr, *temp;
	int cnt = 1;
	temp = new Node();
	temp->data = d;
	temp->next = NULL;

	if (p == 1)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		curr = head;
		for (int i = 2; i < p; i++)
		{
			curr = curr->next;
		}

		temp->next = curr->next;
		curr->next = temp;
	}
}

void del_last()
{
	Node *curr, *temp;
	if (head == NULL)
	{
		cout << "List EMpty";
	}
	else
	{
		curr = head;
		while (curr->next != NULL)
		{
			temp = curr;
			curr = curr->next;
		}
		temp->next = NULL;
	}
}

void del_mid(int p)
{
	Node *curr, *temp;

	if (head == NULL)
	{
		cout << "List EMpty";
	}
	else
	{
		curr = head;
		for (int i = 1; i < p; i++)
		{
			temp = curr;
			curr = curr->next;
		}
		temp->next = curr->next;
	}
}

int main()
{
	int ch;
	int data, pos;
	do
	{
		cout << "\n1.Create\n2.Insert at Begin\n3.Insert at Last\n4.Insert at Middle\n5.Delete at Begin\n6.Delete at Last\n7.Delete at Middle\n8.Display\n9.Exit\n";
		cout << "ENter your choice";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter data";

			cin >> data;
			create(data);
			break;
		case 2:
			cout << "ENter data";
			cin >> data;
			ins_begin(data);
			break;

		case 3:
			cout << "ENter data";
			cin >> data;
			cout << "ENter pos";
			cin >> pos;
			ins_mid(data, pos);
			break;

		case 5:
			del_last();
			break;

		case 6:
			cout << "ENter position";
			cin >> pos;
			del_mid(pos);
			break;

		case 8:
			display();
			break;
		case 9:
			exit(0);
		}
		cout << "Enter 1 to continue";
		cin >> ch;
	} while (ch == 1);
	return 0;
}