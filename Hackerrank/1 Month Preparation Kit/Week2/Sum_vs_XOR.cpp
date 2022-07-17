long sumXor(long n) {
    long t =0;
    while (n>0) {
        if(n%2==0){
            t++;
        }
        n/=2;
    }
    return pow(2,t);
}
