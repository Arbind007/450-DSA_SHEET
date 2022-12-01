#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    int recur(Node *root){
        if(!root)
            return 0;
        int lh = recur(root->left);
        if(lh == -1)
            return -1;
        int rh = recur(root->right);
        if(rh == -1)
            return -1;
        if(abs(lh-rh) > 1)
            return -1;
        return max(lh,rh) + 1;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return recur(root) != -1;
    }
};