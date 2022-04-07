int findPosition(int N) {
    // code here
    if(N==0)
        return -1;
    int num = 0;
    int x = 0,counter=0;
    while(num<N){
        num  = (1<<x);
        x++;
        counter++;
    }
    if(num==N)
        return counter;
    return -1;
}