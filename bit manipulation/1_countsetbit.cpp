int setBits(int N) {
    int cnt = 0;
    for(int i=0;i<32;i++){
        cnt += N & 1;
        N = N >> 1;
    }
    return cnt;
}