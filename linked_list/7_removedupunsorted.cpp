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

Node * removeDuplicates( Node *head) {
     // your code goes here
    if(!head)
        return head;
    unordered_map <int,bool> mp;
    Node* curr = head->next,*prev = head,*tmp = NULL;
    bool tu = false;
    mp[head->data] = true;
    while(curr){
       if(mp[curr->data]){
           tmp = curr;
           prev->next = curr->next;
           delete tmp;
       }
       else{
           mp[curr->data] = true;
           prev = curr;
       }
       curr = curr->next;
    }    
    return head;
}