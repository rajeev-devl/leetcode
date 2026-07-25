class Solution {
public:
    int maxProduct(int n) {
        int one =0;
        int second = 0;
        while(n>0){
            int rem =n%10;
            if(rem>one){//bubble sort
                second = one;
                one = rem;
            }
            else if(rem>second){
                second = rem;
            }
            n/=10; 
        }
        return one*second;
    }
};