#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
    
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}