#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
int n;
cin>>n;

int result=isPrime(n);
if(result){
    cout<<"Prime Number"<<endl;
}
else{
    cout<<"Non-Prime Number"<<endl;
}
cout<<endl;
return 0;
} 