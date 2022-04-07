#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void deleteNode(Node** head, int key)
{
	
	if (*head == NULL)
		return;
		
	if((*head)->data==key && (*head)->next==*head)
	{
		free(*head);
		*head=NULL;
		return;
	}
	
	Node *last=*head,*temp;
	if((*head)->data==key)
	{
		while(last->next!=*head)
			last=last->next;
		last->next=(*head)->next;
		free(*head);
		*head=last->next;
	return;
	}
	
	while(last->next!=*head&&last->next->data!=key)
	{
		last=last->next;
	}

	if(last->next->data==key)
	{
		temp=last->next;
		last->next=temp->next;
		free(temp);
	}
	else
		cout<<"Not Found";
}
