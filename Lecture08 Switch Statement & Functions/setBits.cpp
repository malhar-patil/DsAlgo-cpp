#include<bits/stdc++.h>
using namespace std;
int setBits(int n){
    int count=0;
    while(n!=0){
        int bit=n&1;
        if(bit==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
int a,b;
cin>>a>>b;

cout<<"No. of set bits in "<<a<<": "<<setBits(a)<<endl;
cout<<"No. of set bits in "<<b<<": "<<setBits(b)<<endl;
cout<<endl;
return 0;
}