#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    return ans;
}
int main(){
int n,r;
cin>>n>>r;
cout<<"Result is: ";
cout<<(fact(n))/(fact(n-r)*fact(r));
cout<<endl;
return 0;
}