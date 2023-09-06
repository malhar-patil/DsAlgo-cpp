#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
bool check=true;
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Non-Prime Number"<<endl;
        check=false;
        break;

    }
}
if(check){
    cout<<"Prime Number"<<endl;
}
cout<<endl;
return 0;
}