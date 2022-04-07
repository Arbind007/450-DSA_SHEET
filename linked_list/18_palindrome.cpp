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

bool isPalindrome(Node *head)
{
    //Your code here
    Node *curr = head;
    int arr[100000], i=0; 
    while(curr){
        arr[i] = curr->data;
        i++;
        curr = curr->next;
    }
    for(int j=0; j<i/2; j++){
        if(arr[j]!=arr[i-j-1])
            return false;
    }
    return true;
}