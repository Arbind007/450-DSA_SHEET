#include <bits/stc++.h>
using namespace std;

class LRUCache
{
    private:
    list<pair<int,int>>l;
    unordered_map<int,list<pair<int, int>>::iterator> m;
    int size;

    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        size=cap;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(m.find(key) == m.end())
            return -1;
        l.splice(l.begin(), l, m[key]);
        return m[key]->second;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here   
        if (m.find(key) != m.end()){
            l.splice(l.begin(), l, m[key]);
            m[key]->second = value;
            return;   
        }
        if (l.size() == size){
             
            auto dkey= l.back().first;
            l.pop_back();
            m.erase(dkey);
        }
        l.push_front({key, value});
        m[key]= l.begin();
    }
};