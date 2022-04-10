#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
       //Your code here
        int petrol=0,distance=0;
        for(int i=0;i<n;i++){
            petrol+=p[i].petrol;
            distance+=p[i].distance;
        }
        if(distance>petrol)
            return -1;
        int start=0,left=0;
        for(int i=0;i<n;i++){
            left += p[i].petrol-p[i].distance;
            if(left < 0){
                start=i+1;
                left=0;
            }
        }
        return start;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
