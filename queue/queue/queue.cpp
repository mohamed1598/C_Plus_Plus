#include <iostream>
#include<cassert>
using namespace std;
/*template<class t>
class arrayQueueType
{
private:
    int rear;
    int front;
    int length;
    t* arr;
    int maxLength;
public:
    arrayQueueType( int size)
    {
        front =0;
        arr =new t[size];
        maxLength = size;
        rear = size - 1;
        length = 0;

    }
    int isEmpty()
    {
        return length == 0;
    }
    bool isFull()
    {
        return length == maxLength;
    }
    void addQueue(t element)
    {
        if (isFull()) cout << "queue full";
        else
        {
            rear = (rear + 1) % maxLength;
            arr[rear] = element;
            length++;
        }
    }
    void deleteQueue()
    {
        if (isEmpty()) cout << "empty queue";
        else
        {
            front = (front + 1) % maxLength;
            length--;
        }
    }
    t frontQueue()
    {
        return arr[front];
    }
    t rearQueue()
    {
        return arr[rear];
    }
    void printQueue()
    {
        if (isEmpty()) cout << "empty queue";
        else
        {
            cout << "[ ";
            for (size_t i = front; i != rear; i = (i + 1) % maxLength)
            {
                cout << arr[i]<<" ";
            }
            cout << arr[rear]<<" ]\n";
        }
        
    }
    int queueSearch(t element)
    {
        int pos = -1;
        if (!isEmpty())
        {
            for (int i = front; i != rear; i = (i + 1) % maxLength)
            {
                if (arr[i] == element)
                {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
            {
                if (arr[rear] == element)pos = rear;
            }
        }
        else
            cout << "q is empty";
        return pos;
    }
};*/
template<class t>
class linkedQueue
{
private:
    struct Node
    {
        t item;
        Node* next;
    };
    Node* frontptr;
    Node* rearptr;
    int length;
public:
    linkedQueue()
    {
        frontptr = rearptr=NULL;
        length = 0;
    }
    bool isEmpty()
    {
        if (rearptr == NULL) return true;
        return false;
    }
    void enqueue(t element)
    {
        if (isEmpty())
        {
            frontptr = new Node;
            frontptr->item = element;
            frontptr->next = NULL;
            rearptr = frontptr;
            length++;
        }
        else
        {
            Node* newptr = new Node;
            newptr->item = element;
            newptr->next = NULL;
            rearptr->next = newptr;
            rearptr = newptr;
            length++;
        }
    }
    void dequeue()
    {
        if (isEmpty())cout<<"empty queeue";
        if (frontptr == rearptr)
        {
            frontptr = NULL;
            rearptr = NULL;
            length--;
        }
        else
        {
            Node* tempptr = frontptr;
            frontptr = frontptr->next;
            tempptr->next = NULL;
            delete tempptr;
            length--;
        }
    }
    t getFront()
    {
        assert(!isEmpty());
        return frontptr->item;
    }
    t getRear()
    {
        assert(!isEmpty());
        return rearptr->item;
    }
    void clearQueue()
    {
        Node* current;
        while (frontptr != NULL)
        {
            current = frontptr;
            frontptr = frontptr->next;
            delete current;
        }
        rearptr = NULL; 
        length = 0;
    }
    void display()
    {
        Node* current=frontptr;
        cout << "[ ";
        while (current != NULL)
        {
            cout << current->item<<" ";
            current = current->next;
        }
        cout << "]";
    }
};
int main()
{
   /* arrayQueueType<char> q1(1000);
    q1.addQueue('a');
    q1.addQueue('b');
    q1.addQueue('c');
    q1.addQueue('d');
    //q1.deleteQueue();
    cout<<q1.frontQueue();
    q1.printQueue();
    cout << q1.queueSearch('c');*/
    linkedQueue <char> q1;
    q1.enqueue('a');
    q1.enqueue('a');
    q1.enqueue('x');
    q1.enqueue('d');
    q1.enqueue('f');
    q1.enqueue('r');
    q1.dequeue();
    //cout << q1.getFront();
    //cout << q1.getRear();
    q1.display();
  
    return 0;
}

