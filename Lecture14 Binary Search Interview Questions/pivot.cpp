#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
       
    }
     return s; 
}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
cin>>arr[i];
}

cout<<pivot(arr,n)<<endl;
cout<<endl;
return 0;
}

//SOLUTION USING RECURSION
/*
#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int pivot(int *arr,int s,int e){
    print(arr,s,e);
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[0]<arr[mid]){
        return pivot(arr,mid+1,e);
    }
    else{
        return pivot(arr,s,mid-1);
    }
}
int main(){
int arr[5]={2,2,2,2,2};
cout<<pivot(arr,0,4);
return 0;
}
*/