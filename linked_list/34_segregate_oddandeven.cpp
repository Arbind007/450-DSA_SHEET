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

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
       vector<int> v;
       Node* curr=head;
       while(curr){
           if(curr->data%2==0){
               v.push_back(curr->data);
           }
           curr = curr->next;
       }
       curr = head;
       while(curr){
           if(curr->data%2!=0){
               v.push_back(curr->data);
           }
           curr = curr->next;
       }
       curr = head;
       int i=0;
       while(curr){
           curr->data = v[i];
           i++;
           curr= curr->next;
       }
       return head;
    }
};
