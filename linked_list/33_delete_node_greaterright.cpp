#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next, *prev;

    Node(int x){
	    data = x;
	    next = NULL;
	}
};

class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head == NULL || head->next==NULL){
           return head;
       }
       
       Node *temp = compute(head->next);
       
       if(head->data < temp->data){
           delete head;
           return temp;
       }
       head->next = temp;
       return head;
    }
    
};