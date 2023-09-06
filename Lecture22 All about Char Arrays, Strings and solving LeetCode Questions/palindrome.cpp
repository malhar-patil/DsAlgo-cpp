#include<bits/stdc++.h>
using namespace std;
char toLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        return (ch-'A')+'a';
    }
}
bool checkPalindrome(char ch[],int len){
    int s=0;
    int e=len-1;
    while(s<=e){
        if(ch[s]==' '){
            s++;
        }
        else if(ch[e]==' '){
            e--;
        }
        if(toLower(ch[s])!=toLower(ch[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main(){
char ch[20];
cin.getline(ch,20);
int length=0;
for(int i=0;ch[i]!='\0';i++){
    length++;
}
cout<<length<<endl;
cout<<checkPalindrome(ch,length);

cout<<endl;
return 0;
}