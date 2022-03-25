#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Insert at head and traversing of LL

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp ;
}

void Print_LL(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout <<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
    
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Print_LL(head);

    InsertAtHead(head, 12);
    Print_LL(head);

    InsertAtHead(head, 15);
    Print_LL(head);

    InsertAtHead(head, 17);
    Print_LL(head);



    return 0;
}