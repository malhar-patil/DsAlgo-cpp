#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid){
    int student=1;
    int pageSum=0;
    int i=0;
    while(i<n){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
            i++;
        }
        else{
            student++;
            pageSum=0;
            if(student<=m&&pageSum+arr[i]<=mid){
                pageSum+=arr[i];
                i++;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int bookAlloc(int arr[],int n,int m){
    int s=0;
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
int arr[4]={12,34,67,90};
int n=4;
int m=2;
cout<<bookAlloc(arr,n,m)<<endl;
return 0;
}