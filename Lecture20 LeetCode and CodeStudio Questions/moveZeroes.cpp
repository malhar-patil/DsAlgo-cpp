#include<bits/stdc++.h>
using namespace std;
void moveZeroes(int arr[],int n){
    // int temparr[n];
    int i=0;
    int count=0;
    // while(i<n){
    //     if(arr[i]!=0){
    //         temparr[count]=arr[i];
    //         count++;
            
    //     }
    //     i++;
    // }
    // while(count<n){
    //     temparr[count]=0;
    //     count++;
    // }

    while(i<n){
            if(arr[i]!=0){
                arr[count]=arr[i];
                count++;
            }
            i++;
        }
        while(count<n){
            arr[count]=0;
            count++;
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[5]={0,1,0,3,12};

moveZeroes(arr,5);

cout<<endl;
return 0;
}