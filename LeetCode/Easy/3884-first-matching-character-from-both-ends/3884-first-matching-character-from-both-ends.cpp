class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if(s[left]==s[right]){
                return left;
                break;
            }
            else{
                left++;
                right--;
            }
        }
        return -1;
    }
};