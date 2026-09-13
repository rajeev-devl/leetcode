class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>p;
        for(char c: s){
            p.insert(c);
        }
        return p.size();
    }
};