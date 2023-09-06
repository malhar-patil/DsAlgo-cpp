#include <bits/stdc++.h>
using namespace std;
// void print(int arr[],int s,int e){
//     for(int i=s;i<=e;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
int pivot(int arr[],int s,int e,int &ans){
    if(s>=e){
        return s;
    }
    int mid=s+(e-s)/2;
    // print(arr,s,e);
    if(arr[mid]>=arr[mid-1]){
        pivot(arr,mid+1,e,ans);
    }
    else{
        pivot(arr,s,mid,ans);
    }
}
int main(){
int arr[5]={12,13,15,1,2};
int ans=0;
cout<<pivot(arr,0,4,ans)<<endl;

return 0;
}