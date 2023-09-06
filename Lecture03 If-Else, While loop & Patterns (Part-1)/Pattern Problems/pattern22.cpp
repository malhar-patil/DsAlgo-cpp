// 4
// 1 2 3 4
//   2 3 4
//     3 4
//       4

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int spaces=i-1;
    int count=n-i+1;
    int value=i;
    while(spaces>0){
        cout<<" "<<" ";
        spaces--;
    }
    while(count>0){
        cout<<value<<" ";
        value++;
        count--;
    }
    cout<<endl;
    i++;
}
cout<<endl;
return 0;
}