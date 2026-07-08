class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int res = 0;
        while(n>0){
            int rev = n%10;
            if(res>INT_MAX/10 || res<INT_MIN/10){
                return 0;
            }
            res = res*10+rev;
            n/=10;
            
        }
        if(res==x){
            return true;
        }else{
            return false;
        }
    }
};