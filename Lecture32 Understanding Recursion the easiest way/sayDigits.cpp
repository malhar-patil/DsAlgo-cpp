#include<bits/stdc++.h>
using namespace std;
void sayDigits(string arr[],int n){
    //base case;
    if(n==0){
        return;
    }

    int lastdigit=n%10;
    n=n/10;
    sayDigits(arr,n);

    
    cout<<arr[lastdigit]<<" ";

    
}
int main(){
    int n;
    cin>>n;

string arr[10]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};
sayDigits(arr,n);
cout<<endl;
return 0;
}