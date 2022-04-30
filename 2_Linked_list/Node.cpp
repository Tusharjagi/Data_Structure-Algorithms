#include<iostream>
#include<bits/stdc++.h>

using namespace std;

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

int main(){

    Node* node1 = new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;

    // Node* node2 = new Node(20);
    // cout<<node2 -> data <<endl;
    // cout<<node2   -> next <<endl;

    // Node* node3 = new Node(30);
    // cout<<node3 ->data <<endl;
    // cout<<node3 -> next <<endl;


    
    return 0;
}