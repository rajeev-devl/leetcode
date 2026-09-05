class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char p : s) {
            freq[p]++;
        }

        vector<pair<char,int>>arr;
        for(auto & s:freq){
            arr.push_back({s.first,s.second});
        }
        sort(arr.begin(),arr.end(),[](auto& a , auto& b){
            return a.second>b.second;
        });
        string s1 = "";
        for (auto& s : arr) {
            for (int i = 0; i < s.second; i++) {
                s1 += s.first;
            }
        }
        return s1;
    }
};