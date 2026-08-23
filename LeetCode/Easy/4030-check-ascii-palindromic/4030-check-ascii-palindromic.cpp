class Solution {
public:
    bool isPalindromic(string s) {
        string b = "";
        for(int i = 0;i<s.size();i++){
            bitset<8>binary(s[i]);
            b+=binary.to_string();
        }
        int left = 0;
        int right = b.size()-1;
        while(left<right){
            if(b[left]!=b[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};