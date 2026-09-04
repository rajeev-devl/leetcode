class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>arr;
        for(int i = 0;i<n;i++){
            arr[nums[i]] = i;
        }
        for(int i = 0;i<n;i++){
            int diff = target -nums[i];
            if(arr.count(diff) && arr[diff] !=i){
                return{i,arr[diff]};
            }
        }
        return {};
    }
};
