#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int s,int e){
    //base case
    if(s>e){
        return -1;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
        return peak(arr,mid+1,e);
    }
    else{
        return peak(arr,s,mid);
    }

}
int main(){
int arr[7]={1,2,3,10,9,8,6};
cout<<peak(arr,0,6)<<endl;
cout<<endl;
return 0;
}