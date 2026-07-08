class Solution {
public:
    bool isThree(int n) {
        //int k = 0;

        int x = n;
        int count = 0;
        while(x>0){
            if(n%(x)==0){
                count = count +1;
            }
            x--;
        }
        if(count==3){
            return true;
        }
        return false;
    }
};