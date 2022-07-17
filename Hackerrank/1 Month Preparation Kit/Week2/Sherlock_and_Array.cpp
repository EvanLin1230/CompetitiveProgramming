string balancedSums(vector<int> arr) {
    int size = arr.size(), before = 0, after = 0;
    
    // Initialize after
    for(int i=1; i<size; i++) {
        after += arr[i];
    }
    
    for(int i=0; i<size-1; i++) {
        if(before == after) {
            return "YES";
        } else {
            before += arr[i];
            after -= arr[i+1];
        }
    }
    return "NO";
}
