
#include <iostream>
using namespace std;
const int max_size = 100;
/*
template <class t>
class stack {
    private:
        int top ;
        t item[max_size];
public:
    stack() :top(-1){}
    void push(t element)
    {
        if (top == max_size - 1)cout << "stack full on push\n";
        else {
            top++;
            item[top] = element;
        }
    }
    bool isEmpty()
    {
        if (top <= -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << "stack empty on pop";
        }
        else {
            top--;
        }
    }
    void pop(t &element)
    {
        if (isEmpty() == true)
        {
            cout << "stack empty on pop";
        }
        else {
            element = item[top];
            top--;
        }
    }
    void gettop(t& element)
    {
        if (isEmpty() == true)
        {
            cout << "stack empty on gettop";
        }
        else {
            element = item[top];
            cout << element << endl;
        }
    }
    void print()
    {
        cout << "[ ";
        for (int i = top; i >= 0; i--)
        {
            cout << item[i] << " ";
        }
        cout << "]";
    }

};
int main()
{
    stack <char> s;
    char x;
    s.push('a');
    s.gettop(x);
    s.push('b');
    s.gettop(x);
    s.push('c');
    s.push('d');
    s.push('e');
    s.push('f');
    s.push('g');
    s.print();

    
}*/
template <class t>
class stack
{
private:
    struct node
    {
        t item;
        node* next;
    };
    node* top;
public:
    stack() :top(NULL)
    {}
    void push(t newItem)
    {
        node* newItemPtr = new node;
        if (newItemPtr == NULL)
            cout << "stack push can not allocate memory";
        else
        {
            newItemPtr->item = newItem;
            newItemPtr->next = top;
            top = newItemPtr;
        }
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    void pop()
    {
        if (isEmpty()) {
            cout << "class empty on pop";
        }
        else
        {
            node* temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop( t & stackTop)
    {
        if (isEmpty)
            cout << "class empty on pop";
        else
        {
            stackTop = top->item;
            node* temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void getTop(t &stackTop)
    {
        if (isEmpty())
            cout << "class empty on get top";
        else
        {
            stackTop = top->item;
        }
    }
    void display()
    {
        node* temp = top;
        cout << "[ ";
        while(temp!=NULL)
        { 
            cout << temp->item << " ";
            temp = temp->next;
        }
        cout << "]\n";
    }



};
int main()
{
    stack <char> s;
    char x;
    s.push('a');
    s.getTop(x);
    cout << x << endl;
    s.push('b');
    s.getTop(x);
    cout << x << endl;
    s.push('c');
    s.push('d');
    s.push('e');
    s.push('f');
    s.push('g');
    s.pop();
    s.display();
}
