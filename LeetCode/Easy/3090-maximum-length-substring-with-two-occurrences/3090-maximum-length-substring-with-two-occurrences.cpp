class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_map<int,int>freq;
        int ans = 0;
        while(right<s.size()){
            freq[s[right]]++;
            while(freq[s[right]]>2){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
            right++;  

        }
        return ans;
    }
};