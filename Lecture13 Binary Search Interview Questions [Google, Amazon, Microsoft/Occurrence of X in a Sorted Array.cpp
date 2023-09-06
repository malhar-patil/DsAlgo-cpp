// ques link:
// https://www.codingninjas.com/codestudio/problems/occurrence-of-x-in-a-sorted-array_630456?leftPanelTab=0

int firstOcc(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    int result=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==X){
            result=mid;
            e=mid-1;
        }
        else if(arr[mid]<X){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}

int lastOcc(int arr[], int n, int X){
    int s=0;
    int e=n-1;
    int result=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==X){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]<X){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}
int countOccurences(int arr[], int n, int X)
{
	//Write your code here
    if(lastOcc(arr,n,X)+firstOcc(arr,n,X)==0){
        return 0;
    }
    int result=lastOcc(arr,n,X)-firstOcc(arr,n,X)+1;
    return result;
}

//SOLUTION USING RECURSION
/*#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int firstPos(int *arr,int s,int e,int key,int &ans){

    int mid=s+(e-s)/2;
 
    if(s>e){
        return ans;
    }

    if(arr[mid]==key){
        ans=mid;
        return firstPos(arr,s,mid-1,key,ans);
    }
    else if(arr[mid]>key){
        return firstPos(arr,s,mid-1,key,ans);
    }
    else{
        return firstPos(arr,mid+1,e,key,ans);
    }
}
int lastPos(int *arr,int s,int e,int key,int &ans){

    int mid=s+(e-s)/2;

    if(s>e){
        return ans;
    }

    if(arr[mid]==key){
        ans=mid;
        return firstPos(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]>key){
        return firstPos(arr,s,mid-1,key,ans);
    }
    else{
        return firstPos(arr,mid+1,e,key,ans);
    }
}
int main(){
int arr[7]={1,2,3,3,3,7,9};
int first=firstPos(arr,0,6,3,first);
int last=lastPos(arr,0,6,3,last);
int ans=last-first+1;
cout<<ans<<endl;
return 0;
}*/