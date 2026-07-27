class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr = nums;
        // for(int i =n-1;i>=0;i++){
        //     int x = nums[i];
        //     int res = 0;
        //     while(x>0){
        //         res = res*10 + (x%10);
        //         x/=10; 
        //     }
        //     arr.push_back(res);
        // }
        // return arr;
        for(int i = n-1;i>=0;i--){
            arr.push_back(nums[i]);
        }
        return arr;
    }
};