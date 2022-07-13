int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(),ar.end());
    int tempNum = ar[0];
    int tempCount = 1;
    int pairs = 0;
    for(int i=1;i<n;i++){
        if(tempNum==ar[i] && tempCount==1){
            pairs++;
            tempCount = 0;
        }
        else{
            tempNum = ar[i];
            tempCount = 1;
        }
    }
    return pairs;
}
