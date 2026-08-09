class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n = prices.size();
        while(prices.size()>discounts.size()){
            discounts.push_back(0);
        }
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        double sum{0};
        for (int i = 0; i < n; i++) {
            double res = prices[n - i - 1] * (100.0 - discounts[discounts.size() - i - 1])/ 100.0;
            sum+=res;
        }
        return sum;
    }
};