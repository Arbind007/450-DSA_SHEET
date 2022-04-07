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

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
   unordered_set<Node*> s;
   Node* temp=head1;
   while(temp!=NULL)
   {
       s.insert(temp);
       temp=temp->next;
   }
   temp=head2;
   while(temp!=NULL)
   {
       if(s.find(temp)!=s.end())
       {
           return(temp->data);
       }
       temp=temp->next;
   }
   return(-1);
}

/* Method 2 */
int length(Node *head)
{
    Node *temp = head;
    int l=0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    Node *ptr1;
    Node *ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(!ptr1)
        {
            return -1;
        }
        d--;
    }
    while (ptr1 && ptr2)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;   
    }
    return -1;
}