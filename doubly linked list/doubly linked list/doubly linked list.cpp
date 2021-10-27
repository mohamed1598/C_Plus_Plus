#include <iostream>
using namespace std;
struct node
{
    int item;
    node* next;
    node* prev;
    
};
class doublylinkedlist
{
private:
    node* first, * last;
    int length;
public:
    doublylinkedlist()
    {
        length = 0;
        first = last = NULL;
    }
    bool isEmpty()
    {
        return first == NULL;
    }
    void insertFirst(int element)
    {
        node* newnode = new node;
        newnode->item = element;
        if (length == 0)
        {
            first = last = newnode;
            newnode->next = newnode->prev = NULL;
            length++;
        }
        else
        {
            newnode->next = first;
            newnode->prev = NULL;
            first->prev = newnode;
            first = newnode;
            length++;
        }
    }
    void insertLast(int element)
    {
        node* newnode = new node;
        newnode->item = element;
        if (length == 0)
        {
            first = last = newnode;
            newnode->next = newnode->prev = NULL;
            length++;
        }
        else
        {
            newnode->next = NULL;
            newnode->prev = last;
            last->next = newnode;
            last = newnode;
            length++;
        }
    }
    void insertAt(int pos , int element)
    {
        if (pos<0 || pos>length) cout << "out of range";
        else
        {
            node* newnode = new node;
            newnode->item = element;
            if (pos == 0)insertFirst(element);
            else if (pos == length)insertLast(element);
            else
            {
                node* curr = first;
                for (int i = 1; i < pos; i++)
                {
                    curr = curr->next;
                }
                newnode->next = curr->next;
                newnode->prev = curr;
                curr->next = newnode;
                newnode->next->prev = newnode;
                length++;
            }
        }
    }
    void removeFirst()
    {
        if (length == 0) return;
        else if (length == 1)
        {
            delete first;
            last = first = NULL;
        }
        else
        {
            node* curr = first;
            first = first->next;
            first->prev = NULL;
            delete curr;
        }
        length--;
    }
    void removeLast()
    {
        if (length == 0) return;
        else if (length == 1)
        {
            delete last;
            last = first = NULL;
        }
        else
        {
            node* curr = last;
            last = last->prev;
            last->next = NULL;
            delete curr;
        }
        length--;
    }
    void removeAt(int item)
    {
        if (length == 0) return;
        else if (length == 1)
        {
            delete last;
            last = first = NULL;
        }
        else
        {
            node* curr = first->next;
            if (first->item == item)removeFirst();
            while (curr != NULL)
            {
                if (curr->item == item)
                {
                    break;
                }
                curr = curr->next;
            }
            if (curr == NULL)return;
            else if (curr->next == NULL) removeLast();
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                delete curr;
                length--;
            }
            
            
        }
        
    }
    void print()
    {
        node* curr = first;
        cout << "[ ";
        while (curr != NULL)
        {
            cout << curr->item << " ";
            curr = curr->next;
        }
        cout << "]\n";
    }
    void reverseprint()
    {
        node* curr = last;
        cout << "[ ";
        while (curr != NULL)
        {
            cout << curr->item << " ";
            curr = curr->prev;
        }
        cout << "]\n";
    }
};
int main()
{
    doublylinkedlist d1;
    d1.insertAt(0, 10);
    d1.insertAt(1, 20);
    d1.insertAt(2, 30);
    d1.insertAt(3, 40);
    d1.insertFirst(0);
    d1.insertLast(50);
    d1.removeFirst();
    d1.removeLast();
    d1.removeAt(4);
    d1.print();
    d1.reverseprint();
}