class Solution {
public:
    bool isPalindrome(int x) {
        // more optimal solution here the time complexity is O(logN/2)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int res = 0;
        while (x > res) {
            int rev = x % 10;
            res = res * 10 + rev;
            x /= 10;
        }
        //for odd we are diving with 10 as it ignores the middle element
        return x==res||x==res/10;


        /// lesss optimal approach  (original approach that i solved) here the
        /// time complexity is O(logN) which is much slower than the optimal
        /// solution
        // int n = x;
        // int res = 0;
        // while(n>0){
        //     int rev = n%10;
        //     if(res>INT_MAX/10 || res<INT_MIN/10){
        //         return 0;
        //     }
        //     res = res*10+rev;
        //     n/=10;

        // }
        // if(res==x){
        //     return true;
        // }else{
        //     return false;
        // }
    }
};