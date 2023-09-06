// ques link:
// https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        int count=0;
        while(n!=0){
            int bit=n&1;
            if(bit==1){
                count++;
            }
            if(count>1){
                return false;
            }
            n=n>>1;
        }
        return true;
    }
};