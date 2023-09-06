#include<bits/stdc++.h>
using namespace std;



string reverseString(string s){

    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            int a=x;
            int b=s[i]-1;
            while(a<=b){
              swap(s[a],s[b]);
              a++;
              b--;
            }
            cout<<s<<endl;
            x=i+1;
        }
        if(i==s.length()-1){
            int a=x;
            int b=s.length()-1;
            while(a<=b){
              swap(s[a],s[b]);
              a++;
              b--;
            }
            cout<<s<<endl;
            return s;
        }
    }
    
}
int main(){
string s;
getline(cin,s);

cout<<reverseString(s)<<endl;;

cout<<endl;
return 0;
}