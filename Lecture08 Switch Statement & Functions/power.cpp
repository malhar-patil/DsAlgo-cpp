#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int ans=pow(a,b);
    return ans;
}
int main(){
int a,b;
cin>>a>>b;
int c,d;
cin>>c>>d;
int result=power(a,b);
cout<<result<<endl;

cout<<power(c,d)<<endl;
cout<<endl;
return 0;
}