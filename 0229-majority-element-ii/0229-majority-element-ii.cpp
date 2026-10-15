class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map<int,int>freq;
        // for(int x:nums){
        //     freq[x]++;
        // }

        // int k = n/3;
        // vector<int>res;
        // for(auto & p:freq){
        //     if(p.second>k){
        //         res.push_back(p.first);
        //     }
        // }
        // return res;
        // tc - O(n) and sc - O(n)
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int el1 = INT_MIN;
        int el2  = INT_MIN;

        for(int i = 0;i<n;i++){
            if(cnt1==0 && nums[i]!= el2){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=el1){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if (el1==nums[i]) cnt1++;
            else if(el2==nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>res;
        cnt1 = 0;
        cnt2 = 0;
        int thresh = n/3;
        for(int i = 0;i<n;i++){
            if(el1 == nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
        }

        if(cnt1>thresh) res.push_back(el1);
        if(cnt2>thresh) res.push_back(el2);

        return res;
    }
};