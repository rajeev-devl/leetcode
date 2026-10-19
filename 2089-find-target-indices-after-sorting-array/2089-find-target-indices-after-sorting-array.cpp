class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>res;
        // sort(nums.begin(),nums.end());
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         res.push_back(i);
        //     }
        // }
        int a = 0;
        int freq = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<target){
                a++;
            }
            if(nums[i]==target){
                freq++;
            }
        }

        for(int i = 0;i<freq;i++){
            res.push_back(a+i);
        }
        return res;
    }
};