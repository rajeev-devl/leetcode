class Solution {
public:
    bool isThree(int n) {
        //optimal solution as the time complexity here is O(root(n))
        int root = sqrt(n);
        if(root*root !=n){
            return false;
        }
        if(n<2){
            return false;
        }


        for(int i=2;i*i<=root;i++){
            if(root%i==0){
                return false;
            }
        }
        return true;


        /// this wrong timee complexity is O(n)
        // int x = n;
        // int count = 0;
        // while(x>0){
        //     if(n%(x)==0){
        //         count = count +1;
        //     }
        //     x--;
        // }
        // if(count==3){
        //     return true;
        // }
        // return false;
    }
};