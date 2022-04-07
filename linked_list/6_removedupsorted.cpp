#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *removeDuplicates(Node *head)
{
    Node *it = head,*temp = NULL; 
    bool tu = false;
    while(it){
        if(!temp || temp->data != it->data){
            if(!tu)
                temp = it;
            else{
                temp->next = it;
                tu = false;
                temp = it;
            }
        }
        else{
            tu = true;
        }
        it = it->next;
    }
    if(tu){
        temp->next=NULL;
    }
    return head;
}