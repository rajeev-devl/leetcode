class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int count = 0;
        for(int i = 0;i<n;i++){
            int score = 0;
            int left = 0;
            int right = 1;
            while(right<n){
                if(s[left]==s[right]){
                    score++;
                }
                left++;
                right++;
            }
            if(score == k){
                count++;
            }
            rotate(s.begin(),s.begin()+1,s.end());
        }
        return count;
    }
};