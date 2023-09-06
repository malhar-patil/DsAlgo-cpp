// ques link:
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return -1;
    }
};

//SOLUTION USING RECURSION
/*#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int peak(int *arr,int s,int e){
    print(arr,s,e);
    if(s==e){
        return s; 
    }
    int mid=s+(e-s)/2;
    cout<<"Mid "<<mid<<endl;
    if(arr[mid]<arr[mid+1]){
        peak(arr,mid+1,e);
    }
    else{
        peak(arr,s,mid);
    }
}
int main(){
int arr[5]={0,10,5,2};
cout<<peak(arr,0,3)<<endl;
return 0;
}*/