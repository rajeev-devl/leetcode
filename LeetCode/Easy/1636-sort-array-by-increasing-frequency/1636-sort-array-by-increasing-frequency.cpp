class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        vector<pair<int, int>> arr;
        for (auto& p : freq) {
            arr.push_back({p.first, p.second});
        }
        sort(arr.begin(), arr.end(),[](auto& a, auto& b) { 
            if(a.second==b.second){
                return a.first>b.first;
            }else{
                return a.second < b.second; 
            }
        });
        vector<int> res;
        for (auto& p : arr) {
            for (int i = 0; i < p.second; i++) {
                res.push_back(p.first);
            }
        }
        return res;
    }
};