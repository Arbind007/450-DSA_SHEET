#include <iostream>
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
    Node* reverse(struct Node *head)
   {
       Node* prev=NULL,*curr;
       while(head!=NULL)
        {
            curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
        }
        return prev;
    }

    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *temp1=reverse(first);
        Node *temp2=reverse(second);
        Node* dummy=new Node(0);
        Node *temp=dummy;
        int sum,c=0;
        while(temp1!=NULL || temp2!=NULL || c)
        {
            sum=0;
            if(temp1!=NULL)
            {
               sum+=temp1->data;
               temp1=temp1->next;
            }
            if(temp2!=NULL)
            {
               sum+=temp2->data;
               temp2=temp2->next;
            }
            sum+=c;
            c=sum/10;
            Node *node=new Node(sum%10);
            temp->next=node;
            temp=temp->next;
        }
    return reverse(dummy->next);
    }
};