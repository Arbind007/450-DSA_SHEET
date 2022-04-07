#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

bool isCircular(struct Node *head){
    //code here
    if(!head) 
        return true;
    Node *curr = head;
    while(curr){
        curr = curr->next;
        if(curr==head) 
            return true;
    }
    return false;
}
