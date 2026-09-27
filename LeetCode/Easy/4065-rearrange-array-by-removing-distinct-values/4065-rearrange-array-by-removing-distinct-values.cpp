class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int t = nums.size();
        while (t > 0){
            for (int i = 0; i <= 100; i++) {
                if (freq[i] > 0) {
                    ans.push_back(i);
                    freq[i]--;
                    t--;
                }
            }
        }
    return ans;
    }
};