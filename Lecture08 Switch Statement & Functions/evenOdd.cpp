#include<bits/stdc++.h>
using namespace std;
bool evenOdd(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
int n;
cin>>n;
int result=evenOdd(n);
if(result){
    cout<<"Even Number"<<endl;
}
else{
    cout<<"Odd Number"<<endl;
}
cout<<endl;
return 0;
}