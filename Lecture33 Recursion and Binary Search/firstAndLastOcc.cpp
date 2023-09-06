#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int firstOcc(int arr[],int s,int e,int key,int ans){
    //base case
    if(s>e){
        return ans;
    }

    int mid=s+(e-s)/2;

    
    //
    if(arr[mid]==key){
        ans=mid;
        return firstOcc(arr,s,mid-1,key,ans);
    }
    else if(arr[mid]>key){
        return firstOcc(arr,s,mid-1,key,ans);
    }
    else{
        return firstOcc(arr,mid+1,e,key,ans);
    }
}
int lastOcc(int arr[],int s,int e,int key,int ans){
    //base case
    if(s>e){
        return ans;
    }

    int mid=s+(e-s)/2;
    cout<<"s: "<<s<<" "<<"e: "<<e<<endl; 
    
    //
    if(arr[mid]==key){
        ans=mid;
        return lastOcc(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]>key){
        return lastOcc(arr,s,mid-1,key,ans);
    }
    else{
        return lastOcc(arr,mid+1,e,key,ans);
    }
}
int main(){
int arr[7]={1,2,3,3,3,3,8};
int first=-1;
int last=-1;
cout<<firstOcc(arr,0,7,3,first)<<" "<<lastOcc(arr,0,7,3,last);
cout<<endl;
return 0;
}