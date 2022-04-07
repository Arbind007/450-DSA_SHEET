bool isPowerofTwo(long long n){
    // Your code here    
    if(n && !(n&n-1))
        return true;
    return false;
}