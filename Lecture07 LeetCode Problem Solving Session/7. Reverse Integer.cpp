// ques link:
// https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            if(ans<INT_MIN/10||ans>INT_MAX/10){
                return 0;
            }
            int lastdigit=x%10;
            ans=(ans*10)+lastdigit;
            x=x/10;
        }
        return ans;
    }
};