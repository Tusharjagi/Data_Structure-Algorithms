#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Insert at Middle and traversing of LL

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

void InsertAtMiddle(Node* &tail,Node* &head, int middle, int d)
{
    // Insert at head
    if(middle == 1)
    {
        InsertAtHead(head,d);
        return;
    }

    
    Node* temp = head;
    int cnt = 1;

    while (cnt < middle -1)
    {
        temp = temp ->next;
        cnt++;
    }

    // Insert at last
    if(temp -> next ==NULL)
    {
        InseratAtTail(tail,d);
        return;


    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert ->next = temp -> next;
    temp -> next = nodeToInsert;
    
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

    InsertAtMiddle(tail,head, 1,21);
    Print_LL(head);

    cout<<"head " <<head -> data <<endl;
    cout<<"tail " <<tail -> data <<endl;



    return 0;
}