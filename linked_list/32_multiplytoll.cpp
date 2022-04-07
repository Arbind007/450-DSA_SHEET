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

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
    int p = 1000000007;
    Node* curr1=l1;
    Node* curr2=l2;
    long long num1=0;
    long long num2=0;
    
    while(curr1!=NULL){
        num1=( num1*10 + curr1->data ) % p;
        curr1=curr1->next;
    }
    
    while(curr2!=NULL){
        num2=( num2*10 + curr2->data ) % p;
        curr2=curr2->next;
    }
    long long ans=(num1*num2) % p;
    
    
    return ans;
}