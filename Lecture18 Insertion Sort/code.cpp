#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int index=i-1;
        while(index>=0&&arr[index]>temp){
            arr[index+1]=arr[index];
            index--;
        }

        arr[index+1]=temp;

    }

    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

insertionSort(arr,n);
for(int i=0;i<n;i++){
    
}
cout<<endl;
return 0;
}