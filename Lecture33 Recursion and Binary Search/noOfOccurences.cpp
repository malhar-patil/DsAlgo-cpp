#include <bits/stdc++.h>
using namespace std;
int first(int arr[],int s,int e,int key,int &ans){
    if(s>e){
        return ans;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        first(arr,s,mid-1,key,ans);
    }
    else if(arr[mid]>key){
        first(arr,s,mid-1,key,ans);
    }
    else{
        first(arr,mid+1,e,key,ans);
    }
}
int last(int arr[],int s,int e,int key,int &ans){
    if(s>e){
        return ans;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        ans=mid;
        first(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]>key){
        first(arr,s,mid-1,key,ans);
    }
    else{
        first(arr,mid+1,e,key,ans);
    }
}
int main(){
int arr[7]={1,2,3,3,3,7,10};
int f=0;
int l=0;
cout<<last(arr,0,6,3,l)-first(arr,0,6,3,f)+1<<endl;
return 0;
}