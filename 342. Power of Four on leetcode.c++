class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0; i<100; i++){
            if(n==pow(4,i)){
                return true;
                break;
            }
        }
        return false;
        return {};
    }
};