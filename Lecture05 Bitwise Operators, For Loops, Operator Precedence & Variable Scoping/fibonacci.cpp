#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=0;i<n-2;i++){
    int nextterm=a+b;
    cout<<nextterm<<" ";
    a=b;
    b=nextterm;
}

cout<<endl;
return 0;
}