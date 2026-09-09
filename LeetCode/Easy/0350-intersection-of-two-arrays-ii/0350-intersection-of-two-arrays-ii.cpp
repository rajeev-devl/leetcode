class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq1;
        vector<int> ans;
        for (int num : nums1) {
            freq1[num]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (freq1[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                freq1[nums2[i]]--;
            }
        }
        return ans;
    }
};