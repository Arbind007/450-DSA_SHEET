#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

vector<int> reverseLevelOrder(Node *node)
{
    // code here
    vector <int> ans;
      if(!node)
          return ans;
      queue <Node*> q;
      q.push(node);
      stack<Node*>s;  
      while(!q.empty()){
          Node* curr = q.front();
          q.pop();
          s.push(curr);
          if(curr->right)
              q.push(curr->right);
          if(curr->left)
              q.push(curr->left);
      }
        while(s.size()!=0){
           ans.push_back(s.top()->data);
           s.pop();
       }
      return ans;
}