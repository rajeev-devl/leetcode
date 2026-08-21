class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int>freq;

        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int a = 0;
        int b = 0;
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==2){
                a = i;
            }
            if(freq[i]==0){
                b = i;
            }
        }
        return {a,b};
    }
};