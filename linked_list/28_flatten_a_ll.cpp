#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next, *prev,*bottom;

    Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
};

Node *merge(Node *root1, Node *root2)
{
    Node *res = new Node(0);
    Node *temp = res;
    while(root1&&root2)
    {
        if(root1->data<=root2->data)
        {
            temp->bottom = root1;
            root1=root1->bottom;
        }
        else
        {
            temp->bottom = root2;
            root2=root2->bottom;
              
        }
        temp = temp->bottom; 
    }
    if(root1)
    {
        temp->bottom = root1;
    }
    if(root2)
    {
        temp->bottom = root2;
    }
    return res->bottom;
}

Node *flatten(Node *root)
{
   // Your code here
   if(!root) 
       return NULL;
   Node *res = root;
   Node *temp = root->next;
   while(temp)
   {
       res = merge(res,temp);
       temp = temp->next;
   }
   return res;
}