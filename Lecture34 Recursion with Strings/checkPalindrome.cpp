#include <bits/stdc++.h>
using namespace std;
char smallcase(char &i){
    if(i>='A'&&i<='Z'){
    i=i-'A'+'a';
    return i;
    }
    else{
        return i;
    }

}
int checkPalindrome(string &s,int i,int j){
    //base case
    if(i>j){
        return 1;
    }  

    //preprocessing 
    if(smallcase(s[i])!=smallcase(s[j])){
        return 0;
    }
    else{
    i+=1;
    j-=1;
    }
    checkPalindrome(s,i,j);
}
int main(){
string s="AabBAA";
cout<<checkPalindrome(s,0,s.length()-1)<<endl;
return 0;
}