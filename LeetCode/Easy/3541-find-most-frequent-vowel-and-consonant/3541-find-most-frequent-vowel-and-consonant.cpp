class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int count = 0;
        int count1 = 0;

        for(int c:s){
            int i = c-'a';
            freq[i]++;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                count = max(count,freq[i]);
            }else{
                count1 = max(count1,freq[i]);
            }
        }
        return count+count1;
    }
};