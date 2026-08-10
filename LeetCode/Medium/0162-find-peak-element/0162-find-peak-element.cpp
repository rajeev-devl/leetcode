class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int index = 0;
        while(left<right){
            int mid = left + (right-left)/2;
            if(nums[mid]<nums[mid+1]){
                left++;
            }else{
                right--;
            }
        }
        return left;
    }
};