class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n =nums.size();
        vector<int>arr(n);
        int max1 =0;
        for(int i=0;i<n;i++){
            max1 = max(max1,nums[i]);
            arr[i] = gcd(nums[i],max1);
        }
        int left = 0;
        int right = arr.size()-1;
        long long total = 0;
        sort(arr.begin(),arr.end());

        while(left<right){
            total += gcd(arr[left],arr[right]);
            left++;
            right--;
        }
        return total;
    }
};