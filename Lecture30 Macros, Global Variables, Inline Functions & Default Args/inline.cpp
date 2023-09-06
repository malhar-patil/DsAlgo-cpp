#include<bits/stdc++.h>
using namespace std;
inline int getMax(int &a,int &b){
    return (a>b)?a:b;
}
int main(){
int a=10;
int b=13;
int ans=0;
ans=getMax(a,b);
cout<<ans<<endl;

a+=10;
b+=5;
ans=getMax(a,b);
cout<<ans<<endl;

cout<<endl;
return 0;
}