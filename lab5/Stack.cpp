#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} *top = NULL;
void push(int x)
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Stack is Full\n ";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    int x = -1;
    if (top == NULL)
        cout << "Stack is Empty\n ";
    else
    {
        x = top->data;
        Node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}
void Display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int main()
{

    push(10);
    push(20);
    push(30);
    Display();
    cout << pop();
    return 0;
}