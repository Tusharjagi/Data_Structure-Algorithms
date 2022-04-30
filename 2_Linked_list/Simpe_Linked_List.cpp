#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
};

void PrintLL(Node* &head)
{
    while(head != NULL)
    {
        cout<< head -> data<<" ";
        head = head ->next;
    }
}

int main(){
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one -> data = 1;
    one -> next = two;

    two -> data = 2;
    two -> next = three;

    three -> data = 3;
    three -> next = NULL;

    PrintLL(one);

    return 0;
}