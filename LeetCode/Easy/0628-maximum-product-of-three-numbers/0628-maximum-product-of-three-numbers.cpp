class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // int n = nums.size();
        // int first = 0;
        // int second = 0;
        // int third = 0;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>first){
        //         third = second;
        //         second = first;
        //         first = arr[i];
        //     }else if(arr[i]>second){
        //         third = second;
        //         second = arr[i];
        //     }else{
        //         third = arr[i];
        //     }
        // }
        // return first*second*third;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int first = nums[n-1]*nums[n-2]*nums[n-3];
        int second = nums[0]*nums[1]*nums[n-1];
        
        return max(first,second);
    }
};