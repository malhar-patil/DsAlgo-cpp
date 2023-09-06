#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
cout<<"Sum is: "<<sum<<endl;
cout<<endl;
return 0;
}