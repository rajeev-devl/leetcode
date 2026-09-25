class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // vector<int>freq(nums.size()+1,0);
        // for(int x:nums){
        //     freq[x]++;
        // }
        // for(int i = 0;i<=nums.size();i++){
        //     if(freq[i]==0){
        //         return i;
        //     }
        // }
        // return -1;
        // tc-O(n) sc-O(n)
        int sum = 0;
        int n = nums.size();
        int actual = (n*(n+1))/2;
        for(int i = 0;i<n;i++){
            sum += nums[i];
        }
        return actual - sum;
    }
};