#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    return fact(n-1)*n;
}
int main(){
int n;
cin>>n;
cout<<fact(n)<<endl;
cout<<endl;
return 0;
}