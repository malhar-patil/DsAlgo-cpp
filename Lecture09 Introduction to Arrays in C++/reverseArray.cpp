#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    
}
int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
cin>>arr[i];
}

reverse(arr,n);

cout<<endl;
return 0;
}