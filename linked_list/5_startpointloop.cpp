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

Node* detectAndRemoveLoop(Node* head)
{
	if (head == NULL || head->next == NULL)
		return NULL;

	Node *slow = head, *fast = head;


	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
        if (slow == fast)
			break;
	}

	if (slow != fast)
		return NULL;

	slow = head;
	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
	}

	return slow;
}