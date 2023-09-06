#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return;
}

int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
cin>>arr[i];
}
swapAlternate(arr,n);
cout<<endl;
return 0;
}