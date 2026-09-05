class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        unordered_map<int,int>freq;
        for(int i = 0;i<n;i++){
            freq[bulbs[i]]++;
        }
        vector<int>res;
        for(auto& s:freq){
            if(s.second%2!=0){
                res.push_back(s.first);
            }
        }
        sort(res.begin(),res.end());
        return res;

    }
};