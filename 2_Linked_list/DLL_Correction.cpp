#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// travesing LL
void printLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAttail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtmid(Node *&tail, Node *&head, int mid, int d)
{
    if (mid == 1)
    {
        InsertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < mid - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        InsertAttail(tail, head, d);
        return;
    }

    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    printLL(head);
    // cout << getLength(head) << endl;

    InsertAtHead(tail,head, 11);
    printLL(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    InsertAtHead(tail, head, 3);
    printLL(head);

    InsertAtHead(tail,head , 45);
    printLL(head);

    InsertAttail(tail, head, 34);
    printLL(head);

    InsertAtmid(tail, head, 2, 100);
    printLL(head);

    InsertAtmid(tail, head, 5, 134);
    printLL(head);

    InsertAtmid(tail, head, 3, 143);
    printLL(head);

    return 0;
}
