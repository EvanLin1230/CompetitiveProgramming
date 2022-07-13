long int sum(vector<int> arr){
    long int totalNum = 0;
    for (int i= 0;i<arr.size();i++){
        totalNum+=arr[i];
    }
    return totalNum;
}

void miniMaxSum(vector<int> arr) {
    vector<long int> totalsum;
    long int arrTotal = sum(arr);
    for (int i=0;i<arr.size();i++){
        totalsum.push_back(arrTotal - arr[i]);
    }
    cout << *min_element(totalsum.begin(),totalsum.end()) << " " << *max_element(totalsum.begin(),totalsum.end()) << endl;
    
}
