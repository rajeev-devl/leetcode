class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>>arr;
        for(auto & s: freq){
            arr.push_back({s.first,s.second});
        }
        sort(arr.begin(),arr.end(),[](auto& a,auto& b){
            return a.second>b.second;
        });
        vector<int>result;
        for(int i = 0;i<k;i++){
            result.push_back(arr[i].first);
        }
        return result;
    }
};