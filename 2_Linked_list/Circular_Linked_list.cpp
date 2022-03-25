#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this-> data =d;
        this-> next = NULL;
    }
    ~Node()
    {
        int value = this-> data;
        if(this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
    
};

void InsertNode(Node* &tail, int element,int d )
{
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;
        while (curr -> data != element)
        {
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
        
    }
}

void printLL(Node* tail)
{
    Node* temp = tail;
    do{
        cout<< tail ->data<<" ";
        tail = tail-> next;

    }while(tail != temp);
    cout<<endl;
    
}


int main(){
    Node* tail = NULL;

    InsertNode(tail, 5,4);
    printLL(tail);

    InsertNode(tail, 4,6);
    printLL(tail);

    InsertNode(tail, 6,3);
    printLL(tail);

    InsertNode(tail, 4,10);
    printLL(tail);

    InsertNode(tail, 3,9);
    printLL(tail);
    
    return 0;
}