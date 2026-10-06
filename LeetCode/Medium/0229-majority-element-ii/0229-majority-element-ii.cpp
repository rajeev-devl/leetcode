class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }

        int k = n/3;
        vector<int>res;
        for(auto & p:freq){
            if(p.second>k){
                res.push_back(p.first);
            }
        }
        return res;
    }
};