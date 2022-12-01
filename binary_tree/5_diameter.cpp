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

class Solution {
    int recur(Node* root,int& diameter){
        if(!root)
            return 0;
        int lh = recur(root->left,diameter);
        int rh = recur(root->right,diameter);
        diameter = max(diameter,lh+rh+1);
        return 1 + max(lh,rh);
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int diameter = 0;
        recur(root,diameter);
        return diameter;
    }
};