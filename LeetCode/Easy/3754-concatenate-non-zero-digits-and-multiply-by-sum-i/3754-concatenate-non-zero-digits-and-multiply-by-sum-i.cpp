class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        long long result = 0;
        vector<int> arr;
        while (n > 0) {
            int rev = n % 10;
            sum += rev;
            if (rev > 0) {
                arr.push_back(rev);
            }
            n /= 10;
        }
        reverse(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            result = result*10+arr[i];
        }
        return result*sum;
    }
};