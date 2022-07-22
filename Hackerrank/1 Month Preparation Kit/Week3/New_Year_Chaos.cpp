void minimumBribes(vector<int> q) {
    int bribes =0;
    int f = 0;
    for(int i=0;i<q.size();i++)
    {
        // Check if the element_Now is too far to its position of its right size.
        // its ok when the element_Now is far to its position of left, cause the biggest one will move first
        // then the element_Now which is far to its position of its left will get its position.
        if(q[i]-i-1>2){
            cout<< "Too chaotic" << endl;
            f = 1;
            break;
        }
        // Check the front two element
        // If the one of these element is bigger than element_Now, bribes++;
        //
        // That means these element_Biggers need to bribe the element_Now
        // 8 7 [6] if the element_Now is 6, then we know that, 8 need to cross 6, one times, also 7
        // actually 8 move 2 times to get the 6 position, where is the missing 1 move?
        // the answer is in when the element_Now is 7, then we know that, 8 need to cross 7, one times.
        // so we get the missing move, and that is all clear.
        for(int j=q[i]-2;j<i;j++)
        {
            if(q[j]>q[i]){
                bribes++;
            }
        }
    }
    if(f == 0){
        cout << bribes << endl;
    }
}
