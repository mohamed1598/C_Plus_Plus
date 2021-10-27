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
			first=last = newNode;
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
	void insertLast(int element)
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
			last->next = newNode;
			newNode->next = NULL;
			newNode->item = element;
			last = newNode;
		}
		length++;
	}
	void insertAtPos(int pos, int element)
	{
		if (pos<0 || pos>length)cout << "out of range";
		else {
			node* newNode = new node;
			newNode->item = element;
			if (pos == 0)insertFirst(element);
			else if (pos == length) insertLast(element);
			else
			{
				node* cur = first;
				for (size_t i = 1; i < pos; i++)
				{
					cur=cur->next;
				}
				newNode->next = cur->next;
				cur->next = newNode;
			}
		}
	}
	void print()
	{
		node* cur = first;
		cout << "[ ";
		while (cur != NULL)
		{
			cout << cur->item << " ";
			cur = cur->next;
		}
		cout << "]";
	
	}
	void removeFirst()
	{
		if (length == 0) return;
		else if (length == 1) 
		{
			delete first;//free(first)
			last = first = NULL;
			length--;
		}
		else
		{
			node* curr = first;
			first = first->next;
			delete curr;
			length--;
		}

	}
	void removeLast()
	{
		if (length == 0) return;
		else if (length == 1)
		{
			delete first;//free(first)
			last = first = NULL;
			length--;
		}
		else
		{
			node* curr = first->next;
			node* prev = first;
			while (curr != last)
			{
				curr = curr->next;
				prev = prev->next;
			}
			prev->next = NULL;
			last = prev;
			delete curr;
			length--;
		}
	}
	void remove(int element)
	{
		if (length == 0) return;
		node* curr,* prev;
		if (first->item == element)
		{
			removeFirst();
		}
		else if(last->item == element)
		{
			removeLast();
		}
		else
		{
			curr = first->next;
			prev = first;
			while (curr != NULL)
			{
				if (curr->item == element)
				{
					prev->next = curr->next;
					node* x=curr;
					prev = prev->next;
					curr = prev->next;
					delete x;
					length--;
				}
				else
				{
					prev = prev->next;
					curr = prev->next;
				}
			}
		}
	}
	void reverse()
	{
		node* prev, * curr, * next;
		prev = NULL;
		curr = first;
		next = curr->next;
		while (next != NULL)
		{
			next = curr->next;
			curr->next=prev;
			prev = curr;
			curr = next;
		}
		first = prev;
	}
	int search(int element)
	{
		node* curr = first;
		int pos = 0;
		while(curr!=NULL)
			{
				if (curr->item == element) return pos;
				curr = curr->next;
				pos++;
			}
		return-1;
	}
};
int main()
{
	linkedList l;
	l.insertFirst(10);
	l.insertLast(30);
	l.insertLast(40);
	l.insertAtPos(1, 20);
	l.insertFirst(0);
	l.insertLast(50);
	l.insertLast(50);
	l.insertLast(20);
	/*l.remove(50);
	l.remove(50); 
	l.remove(0);
	l.remove(30);*/

	l.print();
	l.reverse();
	cout<<l.search(100);
	l.print();
}