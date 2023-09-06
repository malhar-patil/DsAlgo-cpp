// 4
// * * * *
//   * * *
//     * *
//       *

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int spaces=i-1;
    int stars=n-i+1;
    while(spaces>0){
        cout<<" "<<" ";
        spaces--;
    }
    while(stars>0){
        cout<<"*"<<" ";
        stars--;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}