#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
bool binarySearch(int arr[],int s,int e,int key){
    print(arr,s,e);
    int mid=(s+(e-s)/2);
    cout<<"Mid: "<<mid<<endl;
    //base case
    if(s>e){
        return false;
    }

    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
    else if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return true;
    }


}
int main(){
int arr[5]={2,5,10,14,30};
int s=0;
int e=4;
cout<<binarySearch(arr,s,e,30);
cout<<endl;
return 0;
}