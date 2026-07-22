class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>arr;
        int left = 0;
        int right = n-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                arr.push_back(left+1);
                arr.push_back(right+1);
                break;
            }
            else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
    return arr;
    }
};