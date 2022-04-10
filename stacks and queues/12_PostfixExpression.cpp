#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int is_operator(int a, int b, char op){
        switch(op){
            case '+': 
                return b+a; break;
            case '-': 
                return b-a; break;
            case '*': 
                return b*a; break;
            case '/':
                return b/a; break;
            default:
                return 0; break;
        }
    }
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S){
    // Your code here
    stack<int> st;
    for(int i=0; i<S.size(); i++){
        if(S[i]==' ') 
            continue;
        else if(isdigit(S[i]))
            st.push(S[i]-'0');
        else{
            int x=st.top(); 
            st.pop();
            int y=st.top(); 
            st.pop();
            st.push(is_operator(x,y,S[i]));
        }
    }
    return st.top();
    }
};

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}