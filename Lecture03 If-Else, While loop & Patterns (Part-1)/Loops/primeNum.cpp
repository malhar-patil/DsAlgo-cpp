#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=2;
bool check=true;
while(i<n){
    if(n%i==0){
        check=false;
        break;
    }
    i++;
}
if(check){
    cout<<"Prime Number"<<endl;
}
else{
    cout<<"Non-Prime Number"<<endl;
}
cout<<endl;
return 0;
}