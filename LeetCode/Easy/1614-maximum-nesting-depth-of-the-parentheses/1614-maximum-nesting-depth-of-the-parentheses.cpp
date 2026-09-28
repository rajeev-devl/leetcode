class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int res = 0;
        for(char c:s){
            if(c=='('){
                count++;
            }
            if(c==')'){
                count --;
            }
            res = max(res,count);
        }
        return res;
    }
};