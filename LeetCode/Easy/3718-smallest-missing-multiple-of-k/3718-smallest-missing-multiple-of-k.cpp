class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq.insert(nums[i]);
        }
        int m = k;
        while (true) {
            if (!freq.count(m)) {
                return m;
            }
            m += k;
        }
        return 0;
    }
};