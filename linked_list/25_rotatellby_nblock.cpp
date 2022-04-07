#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next, *prev;
};

Node* insertAtEnd(Node* head, int data)
{

	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;
	Node* temp = head;
	if (head == NULL) {
		new_node->prev = NULL;
		head = new_node;
		return head;
	}

	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return head;
}
void printDLL(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

Node* reverseByN(Node* head, int k)
{
	if (!head)
		return NULL;
	head->prev = NULL;
	Node *temp, *curr = head, *newHead;
	int count = 0;
	while (curr && count < k) {
		newHead = curr;
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
		count++;
	}
	if (count >= k) {
		Node* rest = reverseByN(curr, k);
		head->next = rest;
		if (rest)
			rest->prev = head;
	}
	return newHead;
}
int main()
{
	Node* head;
	for (int i = 1; i <= 10; i++) {
		head = insertAtEnd(head, i);
	}
	printDLL(head);
	int n = 4;
	head = reverseByN(head, n);
	printDLL(head);
}
