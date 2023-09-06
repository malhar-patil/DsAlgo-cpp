// ques link:
// https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

#include <bits/stdc++.h> 
int getpivot(vector<int>& arr, int n){
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
int binarySearch(vector<int>& arr, int start,int end, int k){
    int s=start;
    int e=end;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot= getpivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
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
int getPivot(int *arr,int s,int e){
    // print(arr,s,e);
    if(s>e){
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[0]<arr[mid]){
        return getPivot(arr,mid+1,e);
    }
    else{
        return getPivot(arr,s,mid-1);
    }
}

int binarySearch(int *arr,int s,int e,int key){
    int mid=s+(e-s)/2;
    if(s>e){
        return 0;
    }

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        binarySearch(arr,s,mid-1,key);
    }
    else{
        binarySearch(arr,mid+1,e,key);
    }
}
int main(){
int arr[5]={3,4,5,1,2};
int pivot=getPivot(arr,0,4);
cout<<"Pivot "<<pivot<<endl;
int key;
cin>>key;
if(key>=arr[0]&&key<=arr[pivot-1]){
    cout<<binarySearch(arr,0,pivot,key);
}
else{
    cout<<binarySearch(arr,pivot,4,key);
}
return 0;
}*/