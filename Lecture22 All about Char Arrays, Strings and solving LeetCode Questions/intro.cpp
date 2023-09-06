#include<bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int ans=0;
    for(int i=0;name[i]!='\0';i++){
        ans++;
    }
    return ans;
}
void getreverse(char name[],int len){
    int s=0;
    int e=len-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    return;
}
int main(){
char name[20];
cout<<"Enter your name: ";
cin>>name;
cout<<"Your name is "<<name<<endl;
int length=getlength(name);
cout<<"Length: "<<length<<endl;
getreverse(name,length);
cout<<name<<endl;

cout<<endl;
return 0;
}