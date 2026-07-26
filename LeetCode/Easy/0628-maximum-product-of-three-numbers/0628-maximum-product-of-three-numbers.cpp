class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;

        int first_min = INT_MAX;
        int second_min = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]>first){
                third = second;
                second = first;
                first = nums[i];
            }else if(nums[i]>second){
                third = second;
                second = nums[i];
            }else if(nums[i]>third){
                third = nums[i];
            }

            if(nums[i]<=first_min){
                second_min = first_min;
                first_min=nums[i];
            }
            else if(nums[i]<=second_min){
                second_min = nums[i];
            }
        }
        int res1 = first*second*third;
        int res2 = first_min*second_min*first;
        return max(res1,res2);
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // int first = nums[n-1]*nums[n-2]*nums[n-3];
        // int second = nums[0]*nums[1]*nums[n-1];
        
        // return max(first,second);
    }
};