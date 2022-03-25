#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Insert at Tail and traversing of LL

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
    // Create New Node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp ;
}

void InseratAtTail(Node* &tail, int d)
{
    // Create New Node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;


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
    Node* tail = node1;
    Print_LL(head);

    InseratAtTail(tail, 12);
    Print_LL(head);

    InseratAtTail(tail, 15);
    Print_LL(head);

    InseratAtTail(tail, 17);
    Print_LL(head);



    return 0;
}