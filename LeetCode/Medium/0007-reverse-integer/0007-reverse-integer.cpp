class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x!=0){
            int rev = x%10;
            if(res>INT_MAX/10 || res==INT_MAX/10 && rev>7){
                return 0;
            }
            if(res<INT_MIN/10 || res==INT_MIN/10 && rev<-8){
                return 0;
            }
            res = res*10 + rev;
            x/=10;
        }
        return res;
    }
};