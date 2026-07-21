class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;
        for(int i = left; i<=right;i++){
            int res = 0;
            int num = i;
            bool isnumber = true;
            while(num>0){
                int rev = num%10;
                if(rev==0 || i%rev!=0){
                    isnumber = false;
                    break;
                }
                num /=10;
            }
            if(isnumber==true){
                arr.push_back(i);
            }
        }
        //sort(arr.begin(),arr.end());
        return arr;
    }
};