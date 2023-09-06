#include<bits/stdc++.h>
using namespace std;
string reverse(string &s,int i){
    if(i>s.length()/2){
        return s; 
    }
    swap(s[i],s[s.length()-i-1]);
    i++;
    return reverse(s,i);
}
int main(){
string s="abcde";
cout<<reverse(s,0);
cout<<endl;
return 0;
}