class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>arr;
        for(int i = 0;i<n;i++){
            arr[nums[i]]++;
        }
        vector<int>res;
        for(int i = 0;i<n;i++){
            if(arr[nums[i]]==2){
                res.push_back(nums[i]);
                arr[nums[i]] = 0;
            }
        }
        return res;
    }
};