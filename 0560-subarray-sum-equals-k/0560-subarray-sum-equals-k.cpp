class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n = nums.size();
        // int count = 0;
        // for(int i = 0;i<n;i++){
        //     int sum = 0;
        //     for(int j = i;j<n;j++){
        //         sum += nums[j];

        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;


        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int presum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            presum += nums[i];
            int remove = presum -k;
            count += mpp[remove];
            mpp[presum] +=1;
        } 
        return count;
    }
};