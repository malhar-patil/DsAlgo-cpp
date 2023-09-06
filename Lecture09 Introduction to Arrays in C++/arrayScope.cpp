#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    arr[2]=11;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
cin>>arr[i];
}

print(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}