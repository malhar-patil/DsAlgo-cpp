#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=0;
int bin=0;
while(n!=0){
    int lastbit=n&1;
    bin=bin+lastbit*abs(pow(10,i));
    i++;
    n=n>>1;
}
cout<<bin<<endl;
cout<<endl;
return 0;
}