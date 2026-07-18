class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int mi = nums[0];
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            mi = min(mi,nums[i]);
        }
        int res = gcd(mi,mx);
        return res;
    }
};