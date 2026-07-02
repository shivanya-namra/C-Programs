#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;


void push(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}


void pop()
{
    if(top == NULL)
    {
        cout << "Stack is Empty";
    }
    else
    {
        cout << "Deleted Element: " << top->data << endl;
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}


void display()
{
    Node *temp = top;

    if(top == NULL)
    {
        cout << "Stack is Empty";
    }
    else
    {
        cout << "Stack Elements: ";
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    cout << endl;

    pop();

    display();

    return 0;
}
