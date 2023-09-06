#include<bits/stdc++.h>
using namespace std;
int fibb(int n){
    //base case
    if(n==0||n==1){
        return n;
    }

    return fibb(n-1)+fibb(n-2);
}
int main(){
int n;
cin>>n;
int ans=fibb(n);
cout<<ans<<endl;
cout<<endl;
return 0;
}