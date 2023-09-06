#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[],int n,int sum){
    //base case
    if(n==1){
        sum+=arr[0];
        return sum;
    }
    sum+=arr[0];
    getSum(arr+1,n-1,sum);
    
}
int main(){
int arr[5]={1,2,10,23,12};
int sum=0;
cout<<getSum(arr,5,sum);
cout<<endl;
return 0;
}