// ques link:
// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include <bits/stdc++.h> 
int firstOcc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int result=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            result=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}

int lastOcc(vector<int>& arr, int n, int k){
    int s=0;
    int e=n-1;
    int result=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            result=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return result;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
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
int first=0;
cout<<firstPos(arr,0,6,3,first)<<" ";
int last=0;
cout<<lastPos(arr,0,6,3,last);

return 0;
*/