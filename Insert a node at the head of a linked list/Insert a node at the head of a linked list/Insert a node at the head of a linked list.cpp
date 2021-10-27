#include <iostream>
using namespace std;
struct node
{
	int item;
	node* next;
};
class linkedList
{
private:
	node* first;
	node* last;
	int length;
public:
	linkedList()
	{
		first = last = NULL;
		length = 0;
	}
	bool isEmpty()
	{
		return length == 0;
	}
	void insertFirst(int element)
	{
		node* newNode = new node;
		newNode->item = element;
		if (length == 0)
		{
			first = last = newNode;
			newNode->next = NULL;
		}
		else
		{
			newNode->next = first;
			newNode->item = element;
			first = newNode;
		}
		length++;
	}
	void print()
	{
		node* cur = first;
		while (cur->next != NULL)
		{
			cout << cur->item << endl;
			cur = cur->next;
		}
		cout << cur->item;

	}
};
int main()
{
	int n;
	linkedList l;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		l.insertFirst(a);
	}
	l.print();
	return 0;
}