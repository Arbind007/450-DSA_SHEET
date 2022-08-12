#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution
{
    static bool comp(Item &a,Item &b){
        return ((double)a.value/a.weight) > (double)b.value/b.weight;
    }
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        double ans;
        sort(arr,arr+n,comp);
        // for(int i=0;i<n;i++)
        //     cout << arr[i].value << " " << arr[i].weight << endl;
        for(int i=0;i<n;i++){
            if(W > arr[i].weight)
                ans += arr[i].value, W -= arr[i].weight;
            else{
                ans += ((double)arr[i].value/arr[i].weight)*(W);
                break;
            }
        }
        return ans;
    }
        
};