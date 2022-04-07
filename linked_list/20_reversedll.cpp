#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next,*prev;
    
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
    
};

Node* reverseDLL(Node * head)
{
    //Your code here
    Node* curr=head,*prev = NULL,*temp = NULL;
    while(curr){
        temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        prev = curr;
        curr = curr->prev;
    }
    return prev;
}