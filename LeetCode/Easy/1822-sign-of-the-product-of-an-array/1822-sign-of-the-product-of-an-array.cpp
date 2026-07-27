class Solution {
public:
    int arraySign(vector<int>& nums) {
    //     int n = nums.size();
    //     int pro = 1;
    //     for(int i = 0;i<n;i++){
    //         pro *= nums[i];
    //     }
    //     if(pro>0){
    //         return 1;
    //     }else if(pro<0){
    //         return -1;
    //     }
    //     return 0;
    // }
    int pro = 1;
    for(int num:nums){
        if(num==0){
            return 0;
        }
        if(num<0){
            pro *= -1;
        }
    }
    return pro;
    }
};