#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=INT_MIN;
int mn=INT_MAX;
for(int i=0;i<n;i++){
    mx=max(arr[i],mx);
    mn=min(arr[i],mn);
}
cout<<"Max: "<<mx<<endl;
cout<<"Min: "<<mn<<endl;
cout<<endl;
return 0;
}