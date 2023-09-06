#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
bool linearSearch(int arr[],int n,int key){
    print(arr,n);
    //base case
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return linearSearch(arr+1,n-1,key);
}
int main(){
int arr[6]={1,2,4,5,9,10};
cout<<linearSearch(arr,6,4 );
cout<<endl;
return 0;
}