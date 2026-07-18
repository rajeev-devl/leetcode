class Solution {
public:
    int countDigits(int num) {
        int a = num;
        int count = 0;
        while(a>0){
            int rem = a%10;
            if (num%rem==0){
                count++;
            }
            a/=10;
        }
        return count;
    }
};