#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=2){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int key;
cin>>key;

int result=binarySearch(arr,n,key);
cout<<result<<endl;
cout<<endl;
return 0;
}