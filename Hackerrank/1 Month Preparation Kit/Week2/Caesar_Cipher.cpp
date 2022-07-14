string caesarCipher(string s, int k) {
    if(k==0){
        return s;
    }
    
    k = k % 26;
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            unsigned char ch = s[i]+k;
            if(ch>'Z'){
                s[i] = ch - 'Z' + 'A' - 1;
            }
            else{
                s[i] = ch;
            }
        }
        else if(s[i]>='a' && s[i]<='z'){
            unsigned char ch = s[i]+k;
            if(ch>'z'){
                s[i] = ch - 'z' + 'a' - 1;
            }
            else{
                s[i] = ch;
            }
        }
    }
    return s;
}
