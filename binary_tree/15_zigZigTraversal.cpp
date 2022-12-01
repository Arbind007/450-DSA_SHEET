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
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	queue <Node*> q;
    	q.push(root);
    	vector <int> ans;
    	bool flag = false;
    	while(!q.empty()){
    	    int size = q.size();
    	    vector <int> tmp;
    	    for(int i=0;i<size;i++){
    	        Node* node = q.front();
    	        q.pop();
    	        tmp.push_back(node->data);
    	        if(node->left)
    	            q.push(node->left);
    	        if(node->right)
    	            q.push(node->right);
    	    }
    	    if(flag)
    	        reverse(tmp.begin(),tmp.end());
    	    for(int i=0;i<tmp.size();i++){
    	        ans.push_back(tmp[i]);
    	    }
    	    flag = !flag;
    	}
    	return ans;
    }
};