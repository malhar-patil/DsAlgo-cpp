#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
int n;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int key;
cin>>key;

int result=linearSearch(arr,n,key);
cout<<result<<endl;

cout<<endl;
return 0;
}