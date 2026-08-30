class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mx = max_element(nums.begin(),nums.end())-nums.begin();
        int mi = min_element(nums.begin(),nums.end())-nums.begin();


        int left = min(mx,mi);
        int right = max(mx,mi);

        int front = right +1;
        int back = n-left;
        int both = (left+1)+(n-right);

        return min({front,back,both});
        // int mx_count = 0;
        // int mi_count = 0;


        // for(int i = 0;i<n;i++){
        //     if(nums[i]==mx){
        //         int front_count_max = i+1;
        //         int back_count_max = n-i;
        //         mx_count = min(front_count_max,back_count_max);
        //     }
        //     if(nums[i]==mi){
        //         int front_count_min = i+1;
        //         int back_count_min  = n-i;
        //         mi_count = min(front_count_min,back_count_min);
        //     }

        // }
        // return mx_count+mi_count;
    }
};