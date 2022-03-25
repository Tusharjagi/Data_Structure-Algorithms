#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void InsertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void DeleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if (curr == prev)
        {
            tail = NULL;
        }

        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void printLL(Node *tail)
{

    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "list is empt" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    InsertNode(tail, 5, 4);
    printLL(tail);

    InsertNode(tail, 4, 6);
    printLL(tail);
/*
    InsertNode(tail, 6, 3);
    printLL(tail);

    InsertNode(tail, 4, 10);
    printLL(tail);

    InsertNode(tail, 3, 9);
    printLL(tail);
    */

    DeleteNode(tail, 6);
    printLL(tail);

    return 0;
}