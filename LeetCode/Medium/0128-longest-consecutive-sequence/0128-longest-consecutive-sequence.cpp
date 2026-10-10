class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set<int>arr(nums.begin(),nums.end());
        // int res = 0;
        // for(int num:nums){
        //     int seq = 0;
        //     int curr = num;
        //     while(arr.find(curr)!= arr.end()){
        //         seq++;
        //         curr++;
        //     }
        //     res = max(res,seq);
        // }
        // return res;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int longest = 1;
        int currCount = 0;
        int lastSmall = INT_MIN;

        for(int i = 0;i<nums.size();i++){
            if(nums[i]-1==lastSmall){
                currCount++;
                lastSmall = nums[i];
            }
            else if(nums[i]!=lastSmall){
                currCount = 1;
                lastSmall = nums[i];
            }
            longest = max(longest,currCount);
        }
        return longest;
    }
};
