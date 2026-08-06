class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int x = n;
            int r1 = 1;
            while (x > 0) {
                int r = x % 10;
                r1 = r1 * r;
                x /= 10;
            }
            if (r1 % t == 0) {
                return n;
            }
            n++;
        }
    }
};