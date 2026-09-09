class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>arr;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    arr.insert(nums2[j]);
                }
            }
        }
        return vector<int>(arr.begin(),arr.end());
    }
};