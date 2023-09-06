// //bubblesort
// #include <bits/stdc++.h>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//             }
//         }
//         counter++;
//     }
//     return;
// }
// int main(){
// int arr[5]={20,1,14,19,2};
// bubbleSort(arr,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     if(n==0){
//         return;
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     bubbleSort(arr,n-1);
// }
// int main(){
// int arr[5]={20,1,14,19,2};
// bubbleSort(arr,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

//selectionSort
// #include <bits/stdc++.h>
// using namespace std;
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     return;
// }
// int main(){
// int arr[5]={10,2,45,109,5};
// selectionSort(arr,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
int getMinimum(int arr[],int n){
    int ans=0;
    int temp=INT_MAX;
    // print(arr,n);
    for(int i=0;i<n;i++){
        if(arr[i]<temp){
        temp=arr[i];
        ans=i;
    }
    }
    // cout<<"ans:"<<ans<<endl;
    return ans;
}
void selectionSort(int arr[],int n){
    if(n==0){
        return;
    }
    int temp=getMinimum(arr,n);
    if(arr[0]>arr[temp]){
        swap(arr[0],arr[temp]);
    }
    // print(arr,n);
    selectionSort(arr+1,n-1);
}
int main(){
int arr[5]={100,43,13,20,4};
selectionSort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}