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
    Node* reverse (Node* head)
    {
        Node* next = NULL;
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head = reverse(head);
        Node* curr = head;
      
        while (curr != NULL)
        {
            if (!curr->next and curr->data == 9)
            {
                curr->data = 0;
                Node* temp = new Node(0);
                curr->next = temp;
            }
            else if (curr->data == 9)
            {
                curr->data = 0;
            }
            else if(curr->data < 9){
               curr->data += 1;
               return reverse(head);
            } 
            curr = curr->next;
        }
    }
};