#include <bits/stdc++.h>
using namespace std;

stack <int> st;

void helper(int x){
    if(st.empty())
        st.push(x);
    else{
        int y = st.top();
        st.pop();
        helper(x);
        st.push(y);
    }
}

void reverse(){
    if(st.size()>0){
        int x = st.top();
        st.pop();
        reverse();
        helper(x);
    }
    
}

 int main(){
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0; 
 }