#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAthead(node* &head, int val )
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void InsertAtTail(node* &head, int val){
    node* n = new node (val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=n;
    
}

void Display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

bool search(node* head, int key)
{
    node* temp = head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
        
    }
    return false;
    
}

int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    insertAthead(head,7);
    Display(head);
    cout<<search(head,4)<<endl;

    
    return 0;
}