class Solution {
public:
    long long removeZeros(long long n) {
        long long result = 0;
        while(n>0){
            int rev = n%10;
            if(rev!=0){
            result = result*10 + rev;
            }
            n/=10;
        }
        long long  result2 = 0;
        while(result>0){
            int rev1 = result%10;
            result2 = result2*10 + rev1;
            result/=10;
        }
        return result2;
    }
};