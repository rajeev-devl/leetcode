class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int x = n;
        while(x>0){
            int rem = x%10;
            sum += rem;
            product *= rem;
            x/=10;
        }
        int res = sum+product;
        if(n%res==0){
            return true;
        }
        return false;
    }
};