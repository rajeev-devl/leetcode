class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int left = 0;
        int right = 0;
        int one = 0;
        int zero = 0;
        int res = 0;
        while (right < s.size()) {
            if (s[right] == '0') {
                zero++;
            } else {
                one++;
            }
            while (zero > k && one > k) {
                if (s[left] == '0') {
                    zero--;
                } else {
                    one--;
                }
                left++;
            }

            res += (right-left+1);
            right++;
        }
        return res;
    }
};