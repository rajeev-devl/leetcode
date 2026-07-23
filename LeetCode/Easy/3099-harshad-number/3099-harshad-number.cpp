class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int res = 0;
        while(n>0){
            int rem = n%10;
            res += rem;
            n/=10; 
        }
        if(x%res==0){
            return res;
        }
        return -1;
    }
};