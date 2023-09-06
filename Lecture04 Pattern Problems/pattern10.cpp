// 4
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=i;
    while(j>=1){
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}