#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    //base case
     if(n==1||n==0){
        return;
     }

    int counter=1;
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    counter++;
    
    bubbleSort(arr,n-1);
    
}
int main(){
int arr[5]={10,8,5,3,1};
bubbleSort(arr,5);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}