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
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           priority_queue<int, vector<int>, greater<int>> pq;
           for(int i=0;i<K;i++)
           {
               while(arr[i])
               {
                   pq.push(arr[i]->data);
                   arr[i]=arr[i]->next;
               }
           }
           Node *head = new Node(pq.top());
           pq.pop();
           Node *temp = head;
           while(pq.empty()==false)
           {
               temp->next = new Node(pq.top());
               pq.pop();
               temp=temp->next;
           }
        return head;
    }
};