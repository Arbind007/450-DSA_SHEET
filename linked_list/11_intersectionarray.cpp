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

Node* findIntersection(Node* head1, Node* head2)
{
   Node* curr1 = head1;
   Node* curr2 = head2;
   Node* prev = new Node(0);
   Node* temp = prev;
   while(curr1!=NULL && curr2!=NULL)
   {
       if(curr1->data == curr2->data)
       {
           temp->next = new Node(curr1->data);
           temp = temp->next;
           curr1 = curr1->next;
           curr2 = curr2->next;
       }
       else if(curr1->data > curr2->data)
       {
           curr2 = curr2->next;
       }
       else curr1 = curr1->next;
   }
   return prev->next;
}