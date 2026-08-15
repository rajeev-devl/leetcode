class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        bool isPossible = false;

        for(int num : nums){
            x = x ^ num;
            if(num!=0){
                isPossible = true;
            }
        }
        if(x!=0){
            return nums.size();
        }else if(x==0 && isPossible == true){
            return nums.size()-1;
        }else{
            return 0;
        }
    }
};