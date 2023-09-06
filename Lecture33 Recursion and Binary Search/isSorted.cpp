#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    //base case
    if(n==0||n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        isSorted(arr+1,n-1);
    }
}
int main(){
int arr[5]={2,4,6,11,13};
cout<<isSorted(arr,5)<<endl;
cout<<endl;
return 0;
}