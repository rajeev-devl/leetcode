class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>freq;
        for(int i = 0;i<words.size();i++){
            freq[words[i]]++;
        }
        vector<pair<string,int>>arr(freq.begin(),freq.end());

        sort(arr.begin(),arr.end(),[](auto& a,auto& b){
            if(a.second==b.second){
                return a.first<b.first;
            }else{
                return a.second>b.second;
            }
        });
        vector<string>res;
        for(int i = 0;i<k;i++){
            res.push_back(arr[i].first);
        }
        return res;
    }
};