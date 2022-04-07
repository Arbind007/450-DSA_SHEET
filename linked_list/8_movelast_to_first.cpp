#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void moveToFront(Node **head)
{
	if (*head== NULL || (*head)->next == NULL)
		return;

	Node *secLast = NULL;
	Node *last = *head;
    while(last->next != NULL){
        secLast = last;
        last = last->next;
    }
    secLast->next = NULL;
    last->next = *head;
    *head = last;
}
