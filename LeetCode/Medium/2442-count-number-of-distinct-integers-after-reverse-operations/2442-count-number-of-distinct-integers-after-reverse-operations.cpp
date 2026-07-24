class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int>arr;
        for(int i = 0;i<nums.size();i++){
            arr.insert(nums[i]);
            int res = 0;
            int x = nums[i];
            while(x>0){
                int rem = x%10;
                res = res*10 + rem;
                x/=10;
            }
            arr.insert(res);
        }
    return arr.size();
    }
};