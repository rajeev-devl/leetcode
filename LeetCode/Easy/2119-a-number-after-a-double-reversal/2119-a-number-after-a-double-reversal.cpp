class Solution {
public:
    bool isSameAfterReversals(int num) {
        int a = num;
        int ans = 0;
        while(a>0){
            int rem = a%10;
            ans = ans*10 + rem;
            a/=10;
        }
        int ans1 = 0;
        while(ans>0){
            int rem1 = ans%10;
            ans1 = ans1*10+rem1;
            ans/=10;
        }
        if(ans1 == num){
            return true;
        }
        return false;
    }
};