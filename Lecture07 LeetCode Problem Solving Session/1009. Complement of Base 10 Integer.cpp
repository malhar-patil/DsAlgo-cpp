// ques link: 
// https://leetcode.com/problems/complement-of-base-10-integer/description/

class Solution {
public:
    int bitwiseComplement(int n) {
        int ans=0;
        int i=0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            int bit=n&1;
            if(bit==1){
                bit=0;
            }
            else{
                bit=1;
            }
            ans=(bit*pow(2,i))+ans;
            i++;
            n=n>>1;
        }
        return ans;
    }
};

//OR

//sclass Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n==0){
//             return false;
//         }
//         for(int i=0;i<31;i++){
//             if(n==pow(2,i)){
//                 return true;
//             }
//         }
//         return false;
//     }
// };