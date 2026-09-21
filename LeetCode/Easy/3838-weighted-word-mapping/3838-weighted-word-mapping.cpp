class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string res = "";
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int c: words[i]){
                sum += weights[c-'a'];
            }
            int rem = sum%26;
            res.push_back(char('z'-rem));
        }
        return res;
    }
};