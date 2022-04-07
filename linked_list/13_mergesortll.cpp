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

class Solution{
    Node* findmid(Node* head)
    {
        Node* slow=head;
        Node* fast=head->next;
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    Node * merge(Node* left ,Node* right)
    {
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        Node* ans = new Node(-1);
        Node* temp=ans;
        while(left && right)
        {
            if(left->data < right->data)
            {
                temp->next=left;
                temp=temp->next;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=temp->next;
                right=right->next;
            }
        }
        while(left != NULL)
        {
            temp->next=left;
            temp=temp->next;
            left=left->next;
        }
        while(right != NULL)
        {
            temp->next=right;
            temp=temp->next;
            right=right->next;
        }
        ans=ans->next;
        return ans;
    }
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(!head || !head->next)
            return head;
        Node* mid=findmid(head);
        Node* left=head;
        Node* right=mid->next;
        mid->next=NULL;
        left=mergeSort(left);
        right=mergeSort(right);
        Node* result=merge(left,right);
        
        return result;
    }
};