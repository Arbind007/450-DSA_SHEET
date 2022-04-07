#include<iostream>
#include<string.h>
using namespace std;
#define MAX_CHARS 256

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int l1 = str1.length();
        int l2 = str2.length();
        if(l2 != l1)
            return false;
        int arr1[26] = {0}, arr2[26] = {0};
        for (int i = 0; i <l1; i++){
           arr1[str1[i] - 'a']++;
           arr2[str2[i] - 'a']++;
        }
        for (int i = 0; i <l1; i++)
           if (arr1[str1[i] - 'a'] != arr2[str2[i] - 'a']) 
               return false;
        return true;
    }
};

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  