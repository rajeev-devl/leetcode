class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        while(numBottles>=numExchange){
            total += numBottles/numExchange;
            int n1 = numBottles%numExchange;
            int n2 = numBottles/numExchange;
            numBottles = n2+n1;
            
        }
        return total;
    }
};