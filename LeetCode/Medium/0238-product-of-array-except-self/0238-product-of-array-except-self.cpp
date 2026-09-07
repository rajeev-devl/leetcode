class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zcount = 0;
        int product = 1;
        for(int num :nums){
            if(num!=0){
                product *= num;
            }else{
                zcount++;
            }
        }
        if(zcount>1){
            return vector<int>(nums.size(),0);
        }
        vector<int>res(n);
        for(int i = 0;i<n;i++){
            if(zcount>0){
                if(nums[i]==0){
                    res[i] = product;
                }
            }else{
                res[i] = product/nums[i];
            }
        }
        return res;
    }  
};