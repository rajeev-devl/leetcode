class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int mx = *max_element(candies.begin(),candies.end());
        vector<bool>arr(n);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=mx){
                arr[i] = true;
            }
            else{
                arr[i] = false;
            }
        }
        return arr;
    }
};