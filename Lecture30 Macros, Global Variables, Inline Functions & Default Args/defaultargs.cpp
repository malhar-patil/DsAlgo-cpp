#include<bits/stdc++.h>
using namespace std;
void print (int e,int arr[],int s=2){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[5]={1,2,3,4,5};
print(5,arr);
cout<<endl;
print(5,arr,1);
cout<<endl;
return 0;
}