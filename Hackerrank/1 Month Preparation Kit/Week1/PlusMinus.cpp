void plusMinus(vector<int> arr) {
    double gl = 0;
    double sl = 0;
    double eg = 0;    
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i]>0){
            gl ++;
        }
        else if(arr[i]<0){
            sl ++;
        }
        else{
            eg ++;
        }
    }
    cout << gl/arr.size() << endl;
    cout << sl/arr.size() << endl;
    cout << eg/arr.size() << endl;
}
