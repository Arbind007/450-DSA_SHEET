int countBitsFlip(int a, int b){
    int ans = 0;
    // Your logic here
    for(int i=0;i<32;i++){
        if((a&1) xor (b&1))
            ans++;
        a = a >> 1,b = b >> 1;
    }
    return ans;
}