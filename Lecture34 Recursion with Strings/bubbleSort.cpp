#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n,int counter){
    // for(int i=0;i<5;i++){
    // cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"counter: "<<counter<<endl;
    // cout<<"n: "<<n<<endl;
    //base case
    if(counter>=n){
        return;
    }

    for(int i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
    }
    counter++;
    bubbleSort(arr,n,counter);
        
}
int main(){
int arr[5]={12,6,20,45,11};
int counter=0;
bubbleSort(arr,5,counter);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}