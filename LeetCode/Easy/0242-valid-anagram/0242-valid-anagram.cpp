class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<int, int>freq;
        for(int i = 0;i<s.size();i++){
            freq[s[i]]++;
            freq[t[i]]--;
        }

        for(int i = 0;i<t.size();i++){
            if(freq[s[i]]!=freq[t[i]]){
                return false;
            }
        }
        return true;
    }
};