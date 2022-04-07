#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next, *prev;

    Node(int x){
	    data = x;
	    next = NULL;
	}
};

int getNthFromLast(struct Node *head, int n)
{
    int c=0;
    int ans;
    struct Node * t=head,* p=head;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    if(n>c){
        return -1;
    }
    c=c-n;
    while(c>0){
        t=t->next;
        c--;
    }
    return t->data;
}