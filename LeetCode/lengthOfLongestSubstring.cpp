class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length_Result = 0;
        int temp_index = 0;
        if(s.length()==1)
            return 1;
        for(int i=1;i<s.length();i++){
            int length_Temp = 1;
            for(int j=temp_index; j<=i-1;j++){
                if(s[j]==s[i]){
                    temp_index = j+1;
                    if(length_Temp < i-temp_index+1){
                        length_Temp = i-temp_index+1;
                    }
                    break;
                }
                else{
                    length_Temp+=1;
                }
            }
            if(length_Temp > length_Result){
                length_Result = length_Temp;
            }
        }
        return length_Result;
    }
};
