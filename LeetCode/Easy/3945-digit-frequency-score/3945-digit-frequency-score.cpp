class Solution {
public:
    int digitFrequencyScore(int n) {
        int freq[10] = {0};
        int res = 0;
        while(n>0){
            int rem = n%10;
            freq[rem]++;
            n/=10;
        }
        for(int i = 0;i<10;i++){
            res += i*freq[i];
        }
        return res;
    }
};